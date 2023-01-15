#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int pacmanx, int pacmany);
void erase(int pacmanx, int pacmany, char previousChar);
char getCharAtxy(short int x, short int y);
void printp(int pacmanx, int pacmany);
void printG(int pacmanx, int pacmany);

main()
{
    int pacmanx = 4;
    int pacmany = 4;
    string direction = "right";
    char previousChar = ' ';
    bool gamerunning = true;
    system("cls");
    printmaze();
    printG(pacmanx, pacmany);
    printp(pacmanx, pacmany);
    while (true)
    {
        Sleep(100);
        if (direction == "right")
        {
            char nextlocation = getCharAtxy(pacmanx + 1, pacmany);
            if (nextlocation == '*')
            {
                direction = "left";
            }
            else if (nextlocation == ' ' || nextlocation == '.')
            {
                erase(pacmanx, pacmany, previousChar);
                pacmanx = pacmanx + 1;
                previousChar = nextlocation;
                printG(pacmanx, pacmany);
            }
        }

        {
            if (GetAsyncKeyState(VK_LEFT))
            {
                char nextlocation = getCharAtxy(pacmanx - 1, pacmany);
                if (nextlocation == ' ')
                {
                    erase(pacmanx, pacmany, previousChar);
                    pacmanx = pacmanx - 1;
                    printp(pacmanx, pacmany);
                }
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                char nextlocation = getCharAtxy(pacmanx + 1, pacmany);
                if (nextlocation == ' ')
                {
                    erase(pacmanx, pacmany, previousChar);
                    pacmanx = pacmanx + 1;
                    printp(pacmanx, pacmany);
                }
            }
            if (GetAsyncKeyState(VK_UP))
            {
                char nextlocation = getCharAtxy(pacmanx, pacmany - 1);

                if (nextlocation == ' ')
                {
                    erase(pacmanx, pacmany, previousChar);
                    pacmany = pacmany - 1;
                    printp(pacmanx, pacmany);
                }
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                char nextlocation = getCharAtxy(pacmanx, pacmany + 1);

                if (nextlocation == ' ')
                {
                    erase(pacmanx, pacmany, previousChar);
                    pacmany = pacmany + 1;
                    printp(pacmanx, pacmany);
                }
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                gamerunning = false;
            }
            Sleep(200);
        }
    }
}
void gotoxy(int pacmanx, int pacmany)
{
    COORD coordinates;
    coordinates.X = pacmanx;
    coordinates.Y = pacmany;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{

    cout << "*****************************" << endl;
    cout << "*    .               .      *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*****************************" << endl;
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int pacmanx, int pacmany, char previousChar)
{
    gotoxy(pacmanx, pacmany);
    cout << " ";
}
void printp(int pacmanx, int pacmany)
{
    gotoxy(pacmanx, pacmany);
    cout << "P";
}
void printG(int pacmanx, int pacmany)
{
    gotoxy(pacmanx, pacmany);
    cout << "G";
}