#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void printMaze();
void printPlayer();
void erasePlayer();
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
void moveEnemyX(int movementX, int playerX);
void moveEnemyY(int movementY, int playerY);
void movePlayer(int score);

int pX = 110;
int pY = 25;

int main()
{
    int score = 0;
    int directionX = 1;
    int directionY = 1;
    int movementX = 100;
    int movementY = 140;
    int playerX = 10;
    int playerY = 7;
    
    system("cls");
    printMaze();
    

    while (true) 
    {
        moveEnemyX(movementX, playerX);

        movementX += directionX;

        if(movementX <= 98 || movementX >= 118)
        {
            directionX *= -1;
        }    

        moveEnemyY(movementY, playerY);

        playerY += directionY; 

        if(playerY <= 1 || playerY >= 40)
        {
            directionY *= -1;
        }

        movePlayer(score);

    }
    
}

void printMaze()
{
cout << endl;
cout << "                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ " << endl;
cout << "                                                                             @@      ..  -*-@@@-@-                            +@ @*                            :@:@@@-*=     :.   @@ " << endl;
cout << "                                                                             @@    .. :. -*-@@@-@-                            +@ @*                            :@:@@@-*- .  :.    @@ " << endl;
cout << "                                                                             @@   :.. .. -*-@@@:@-                            +@ @*                            :@:@@@-*:.  .      @@ " << endl;
cout << "                                                                             @@     . :. -*-@@@:@-                            =@@@+                            :@:@@@-+:.. . ..   @@ " << endl;
cout << "                                                                             @@   .. ..  -*-@@@:@-                            .#@#.                            :@:@@@-+-  . . .   @@ " << endl;
cout << "                                                                             @@     ..   -*-@@@:@-                                                             :@:@@@-+-  . ...   @@ " << endl;
cout << "                                                                             @@    .:    -*-@@@:@-                                                             :@:@@@-+-  ..      @@ " << endl;
cout << "                                                                             @@   .:     -*-@@@:@-                            .#@%.                            :@:@@@-+-   ..::.  @@ " << endl;
cout << "                                                                             @@   :      -*-@@@:@-                            =@@@+                            :@:@@@-+-       :. @@ " << endl;
cout << "                                                                             @@  ..      -*-@@@:@-                            *@ @*                            :@:@@@-+-       :. @@ " << endl;
cout << "                                                                             @@  :.      -*-@@@:@-                            *@ @*                            :@:@@@-+-    .:::  @@ " << endl;
cout << "                                                                             @@  :    .  -*-@@@:@-                            *@ @*                            :@:@@@-+-   ::.    @@ " << endl;
cout << "                                                                             @@  :  .:.. -*-@@@:@-                            *@ @*                            :@:@@@-+-.::.      @@ " << endl;
cout << "                                                                             @@  :    .. -*-@@@:@-                            *@ @*                            :@:@@@:--..        @@ " << endl;
cout << "                                                                             @@  :  .:.  -*-@@@:@-                            *@ @*                            :@:@@@:-:          @@ " << endl;
cout << "                                                                             @@  ..      -*-@@@:@-                            *@ @*                            :@:@@@:-:          @@ " << endl;
cout << "                                                                             @@  .:      -*-@@@:@-                            =@@@+                            :@:@@@:-:          @@ " << endl;
cout << "                                                                             @@   ..     -*-@@@:@-                            .#@#.                            :@:@@@:-: ..       @@ " << endl;
cout << "                                                                             @@   ..     -*-@@@:@-                                                             :@:@@@:-:          @@ " << endl;
cout << "                                                                             @@   ..     -*-@@@:@-                                                             :@:@@@:-.  .       @@ " << endl;
cout << "                                                                             @@   ..     -*-@@@:@-                            .#@#.                            :@:@@@:=-.         @@ " << endl;
cout << "                                                                             @@   .:.    -*-@@@:@-                            =@@@+                            :@:@@@-+-::::.     @@ " << endl;
cout << "                                                                             @@    .::.  -*-@@@:@-                            +@ @#                            :@:@@@-*-  ..:.    @@ " << endl;
cout << "                                                                             @@       .. -*-@@@:@-                            +@ @*                            :@:@@@-*-     :    @@ " << endl;
cout << "                                                                             @@       :  -*-@@@:@-                            +@ @*                            :@:@@@-*-    :.    @@ " << endl;
cout << "                                                                             @@     .:.  -*-@@@:@-                            +@ @*                            :@:@@@-*-  .:.     @@ " << endl;
cout << "                                                                             @@    .:    -*-@@@:@-                            +@ @#                            :@:@@@-*-  :.      @@ " << endl;
cout << "                                                                             @@    .     -*-@@@:@-                            +@ @#                            :@:@@@-*- ..       @@ " << endl;
cout << "                                                                             @@    .:..  -*-@@@:@-                            *@ @*                            :@:@@@-*-  .::.    @@ " << endl;
cout << "                                                                             @@     ..:::-+:@@@:@-                            =@@@+                            :@:@@@-*-    .:.   @@ " << endl;
cout << "                                                                             @@        ..:=:@@@:@-                            .#@#.                            :@:@@@-*-     ..   @@ " << endl;
cout << "                                                                             @@       .. .-:@@@:@-                                                             :@:@@@-*-     ..   @@ " << endl;
cout << "                                                                             @@          .-:@@@:@-                                                             :@:@@@-*-     ..   @@ " << endl;
cout << "                                                                             @@       .. .-:@@@:@-                            .#@%.                            :@:@@@-*-     .:   @@ " << endl;
cout << "                                                                             @@          .::@@@:@:                            =@@@+                            :@:@@@-*-      :.  @@ " << endl;
cout << "                                                                             @@          .::@@@:@-                            *@ @#                            :@:@@@-*-      ..  @@ " << endl;
cout << "                                                                             @@          .-:@@@:@-                            *@ @#                            :@:@@@-*-  ...  :  @@ " << endl;
cout << "                                                                             @@        ..:-:@@@:@-                            *@ @#                            :@:@@@-*- ..    .  @@ " << endl;
cout << "                                                                             @@      .:.:-+-@@@:@-                            *@ @#                            :@:@@@-*- ..:.  .  @@ " << endl;
cout << "                                                                             @@    .::   -*-@@@:@-                            *@ @#                            :@:@@@-*-  .    .  @@ " << endl;
cout << "                                                                             @@  .::.    -*-@@@:@-                            *@ @#                            :@:@@@-*-       :  @@ " << endl;
cout << "                                                                             @@ .:       -*-@@@:@-                            +@ @*                            :@:@@@-*-      ..  @@ " << endl;
cout << "                                                                             @@ .:       -*-@@@:@-                            -@@@=                            :@:@@@-*-      :   @@ " << endl;
cout << "                                                                             @@  .:..    -*-@@@:@-                             *@#.                            :@:@@@-*-     :.   @@ " << endl;
cout << "                                                                             @@      ..  -*-@@@:@-                                                             :@:@@@-*-    ::    @@ " << endl;
cout << "                                                                             @@   ... .  -*-@@@:@-                             .:.                             :@:@@@-*-   :.     @@ " << endl;
cout << "                                                                             @@   . . .  :*-@@@:@-                            :%@@:                            :@:@@@-*-  .. ..   @@ " << endl;
cout << "                                                                             @@   .. . ...+-@@@:@-                            =@#@+                            :@:@@@-*- .: ..    @@ " << endl;
cout << "                                                                             @@      : ...+-@@@:@-                            *@ @*                            :@:@@@-*- .. . .   @@ " << endl;
cout << "                                                                             @@    .:  ..:*-@@@:@-                            *@ @*                            :@:@@@-*- .: ..    @@ " << endl;
cout << "                                                                             @@   .:     -*-@@@:@-                            *@ @*                            :@:@@@-*-  :.      @@ " << endl;
cout << "                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ " << endl;
cout << endl;
gotoxy(100, 13);
cout << '$';
gotoxy(120, 12);
cout << '$';
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void moveEnemyX(int movementX, int playerX)
{
        gotoxy(movementX, playerX);
        cout << " *-_-* ";
        Sleep(40);
        gotoxy(movementX, playerX);
        cout << " " << endl;
}

void moveEnemyY(int movementY, int playerY)
{
        gotoxy(movementY, playerY);
        cout << "(+-_-+)";
        Sleep(100);
        gotoxy(movementY, playerY);
        cout << "        " << endl;
}   

void printPlayer()
{
    gotoxy(pX, pY);
    cout << "H";
}

void erasePlayer()
{
    gotoxy(pX, pY);
    cout << " ";
}

void movePlayer(int score)
{
        Sleep(40);
        erasePlayer();

        if(GetAsyncKeyState(VK_RIGHT) && getCharAtxy(pX+1, pY) == ' ')
        {
            pX += 1;
            if (getCharAtxy(pX+1, pY) == '$')
            {
                score++; 
            }
        }
        else if (GetAsyncKeyState(VK_LEFT) && getCharAtxy(pX-1, pY) == ' ')
        {
            pX -= 1;
            if (getCharAtxy(pX-1, pY) == '$')
            {
                score++; 
            }
        }
        else if (GetAsyncKeyState(VK_DOWN) && getCharAtxy(pX, pY+1) == ' ')
        {
            pY += 1;
            if (getCharAtxy(pX, pY+1) == '$')
            {
                score++; 
            }
        }
        else if (GetAsyncKeyState(VK_UP) && getCharAtxy(pX, pY-1) == ' ')
        {
            pY -= 1;
            if (getCharAtxy(pX, pY-1) == '$')
            {
                score++; 
            }
        }

        gotoxy(60, 3);
        cout << "Score: " << score;
        printPlayer();
}
