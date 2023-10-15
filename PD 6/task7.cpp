#include <iostream>
#include <cmath>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

main()
{
    int examHour, examMinute;
    int studentHour, studentMinute;

    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;

    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;

    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;

    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;

    cout << checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    string result;

    examHour = examHour * 60 + examMinute;
    studentHour = studentHour * 60 + studentMinute;

    int time = examHour - studentHour;

    if (time >= 60){
        int hour = time / 60;
        int minutes = time % 60;
        result = "Early\n" + to_string(hour) + ":" + to_string(minutes) + " hours before the start";
    }

    if (time < 60 && time > 30)
    {
        result = "Early\n" + to_string (time) + " minutes before the start";
    }

    if (time <= 30 && time > 0)
    {
        result = "On time\n" + to_string(time) + " minutes before the start";
    }

    if (time == 0)
    {
        result = "On time";
    }

    if (time < 0 && time > -30)
    {
        result = "Late\n" + to_string(abs(time)) + " minutes after the start";
    }

    if (time < -30 && time > -60)
    {
        result = "Late\n" + to_string(abs(time)) + " minutes after the start";
    }

    if (time <= -60)
    {
        time = abs(time);
        int hour = time / 60;
        int minutes = time % 60;
        result = "Late\n" + to_string(hour) + ":" + to_string(minutes) + " hours after the start";
    }

    return result;
}
