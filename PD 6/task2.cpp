#include<iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMath, float marksChemistry ,float marksSocialScience, float marksBiology);
string calculateGrade(float average);

main()
    {
	float marksEnglish,  marksMath, marksChemistry , marksSocialScience,  marksBiology;
    string name, grade;
    float average;
    
    cout<<"Enter student name: ";
    cin>>name;
	
    cout << "Enter marks for English: ";
	cin >> marksEnglish;
	
    cout << "Enter marks for Maths: ";
	cin >> marksMath;
	
    cout << "Enter marks for Chemistry: ";
	cin >> marksChemistry;
	
    cout << "Enter marks for Social Science: ";
	cin >> marksSocialScience;
	
    cout << "Enter marks for Biology: ";
	cin >> marksBiology;
    
    average = calculateAverage (marksEnglish,  marksMath , marksChemistry , marksSocialScience,  marksBiology);
    grade = calculateGrade (average);
    
    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade;
}
float calculateAverage(float marksEnglish, float marksMath,float marksChemistry ,float marksSocialScience, float marksBiology)
{
	float average;
	
    average = (marksEnglish + marksMath + marksChemistry + marksSocialScience + marksBiology) / 5;
    
    return average;
}
string calculateGrade(float average)
{
    string grade;
    
    if(average >= 90 && average <=100)
    {
        grade = "A+";
    }
    else if(average >= 80 && average <90)
    {
        grade = "A";
    }
    else if(average >= 70 && average <80)
    {
        grade = "B+";
    }
    else if(average >= 60 && average <70)
    {
        grade = "B";
    }
    else if(average >= 50 && average <60)
    {
        grade = "C";
    }
    else if(average >= 40 && average <50)
    {
        grade = "D";
    }
    else if (average <= 40)
    {
        grade = "F";
    }

    return grade;
}
