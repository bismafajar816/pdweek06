#include <iostream>
using namespace std;
int service(char type, float minutes, string time);
main()
{
    char type;
    float minutes;
    string time;
    cout << "enter p for premium or r for regular:";
    cin >> type;
    cout << "enter minutes:";
    cin >> minutes;
    cout << "day or night:";
    cin >> time;
    float price = service(type, minutes, time);
    cout << "the charges are:" << price;
}
int service(char type, float minutes, string time)
{
    float charge;
    float lminutes;
    if (type == 'r')
    {
        if (minutes <= 50)
        {
            charge = 10 ;
        }
        if (minutes > 50)
        {
            lminutes = minutes - 50;
            charge = (lminutes * 0.20) + 10;
        }
    }
    if (type == 'p')
    {
        if (time == "day" && minutes < 75)
        {
            charge = 7.5 - (minutes * 0.10);
        }
        if (time == "night" && minutes > 100)
        {
            lminutes = minutes - 100;
            charge = (lminutes * 0.05) + 25 ;
        }
          if (time == "night" && minutes < 100)
        {
           charge = 25 ;
        }
        if (time == "day" && minutes > 75)
        {
            lminutes = minutes - 75;
            charge = (lminutes * 0.50) + 7.5 + 25;
        }
    }
    return charge;
}