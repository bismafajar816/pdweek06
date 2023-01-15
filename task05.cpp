#include <iostream>
using namespace std;
float calculate(string day, string fruit, float number);
main()
{
    string day, fruit;
    float number;
    cout << "enter day:";
    cin >> day;
    cout << "enter fruit name:";
    cin >> fruit;
    cout << "amount of fruit:";
    cin >> number;
    if (day != "sunday" || day != "monday" || day != "tuesday" || day != "wednesday" || day != "thursday" || day != "friday" || day == "saturday")
    {
        cout <<"error";
    }
    else
    {
    float pay = calculate(day, fruit, number);
    cout << "you have to pay:" << pay;
    }
}
float calculate(string day, string fruit, float number)
{
    float price;
    if (day == "saturday" || day == "sunday")
    {
        if (fruit == "banana")
        {
            price = number * 2.70;
        }
        if (fruit == "apple")
        {
            price = number * 1.25;
        }
        if (fruit == "orange")
        {
            price = number * 0.90;
        }
        if (fruit == "grapefruit")
        {
            price = number * 1.60;
        }
        if (fruit == "kiwi")
        {
            price = number * 3.00;
        }
        if (fruit == "pineapple")
        {
            price = number * 5.60;
        }
        if (fruit == "grapes")
        {
            price = number * 4.20;
        }
    }
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {

        if (fruit == "banana")
        {
            price = number * 2.50;
        }
        if (fruit == "apple")
        {
            price = number * 1.20;
        }
        if (fruit == "orange")
        {
            price = number * 0.85;
        }
        if (fruit == "grapefruit")
        {
            price = number * 1.45;
        }
        if (fruit == "kiwi")
        {
            price = number * 2.70;
        }
        if (fruit == "pineapple")
        {
            price = number * 5.50;
        }
        if (fruit == "grapes")
        {
            price = number * 3.85;
        }
    }

    return price;
}
