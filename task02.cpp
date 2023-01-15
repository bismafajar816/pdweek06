#include <iostream>
using namespace std;
string status(string name, float marks1, float marks2, float marks3, float marks4, float marks5);
main()
{
    string name;
    float marks1, marks2, marks3, marks4, marks5;
    cout << "enter name:";
    cin >> name;
    cout << "enter english marks:";
    cin >> marks1;
    cout << "enter maths marks:";
    cin >> marks2;
    cout << "enter chemistry marks:";
    cin >> marks3;
    cout << "enter social sciences marks:";
    cin >> marks4;
    cout << "enter biology marks:";
    cin >> marks5;
    string mark =status( name, marks1, marks2, marks3, marks4, marks5);
    cout <<"your grade is:"<<mark;
}
string status(string name, float marks1, float marks2, float marks3, float marks4, float marks5)
{
    string grade;
    float total = marks1 + marks2 + marks3 + marks4 + marks5;
    float percentage = (total / 500) * 100;
    cout << "your percentage" << percentage<<endl;
    if (percentage >= 90 && percentage <= 100)
    {
        grade = "A+";
    }
    if (percentage >= 80 && percentage < 90)
    {
        grade = "A";
    }
    if (percentage >= 70 && percentage < 80)
    {
        grade = "B+";
    }
    if (percentage >= 50 && percentage < 60)
    {
        grade = "C";
    }

    if (percentage >= 40 && percentage < 50)
    {
        grade = "D";
    }

    if (percentage < 40)
    {
        grade = "F";
    }



    return grade;
}