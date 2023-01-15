#include <iostream>
using namespace std;
int time(int Shour, int Sminute, int hour, int minute);
main()
{
    int Shour, Sminute, hour, minute;
    cout << "enter standard time hour:";
    cin >> Shour;
    cout << "enter standard time minutes:";
    cin >> Sminute;
    cout << "enter arrival time hour:";
    cin >> hour;
    cout << "enter arrival time minutes:";
    cin >> minute;
    int total_time = time(Shour, Sminute, hour, minute);
    int finalhour = total_time / 60;
    int finalminutes = total_time % 60;
    cout << finalhour << "hours and" << finalminutes <<"minutes";
}
int time(int Shour, int Sminute, int hour, int minute)
{
    int htime = Shour * 60;
    int total = htime + Sminute;
    int dtime = (hour * 60) + minute;
    int difference;
    if (dtime > total)
    {
        difference = dtime - total;
        if (difference > 0)
        {
            cout << "you are late and difference time is" << endl;
        }
    }
    if (dtime < total)
    {
        cout << "you are early and time difference is ";
        difference = total - dtime;
    }
    return difference;
}
