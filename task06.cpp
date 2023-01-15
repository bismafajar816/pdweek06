#include <iostream>
using namespace std;
float calculatePricestudio(string month, int stay);
float calculatePriceAppartment(string month, int stay);
main()
{
    string month, type;
    int stay;
    cout << "enter month:";
    cin >> month;

    cout << "enter number of stays:";
    cin >> stay;
    float appartment = calculatePriceAppartment(month, stay);
    cout << "appartment:" << appartment;
    float studio = calculatePricestudio(month, stay);
    cout << "studio:" << studio;
}
float calculatePriceAppartment(string month, int stay)
{
    float price, discount, result;
    if (month == "may" || month == "october")
    {
        price = stay * 65;
        discount=price * 0.1;
        result = price - discount;
    }
    else if (month == "june" || month == "september")
    {
        price = stay * 68.70;
        discount=price * 0.1;
        result = price - discount;
    }
    else if (month == "july" || month == "august")
    {
        price = stay * 77;
        discount=price * 0.1;
        result = price - discount;
    }

    return result;
}
float calculatePricestudio(string month, int stay)
{
    float price, discount, result;

    if (month == "may" || month == "october")
    {
        if (stay < 7)
        {
            result = stay * 50;
        }
        else if (stay > 14 )
        {
            price = stay * 50;
            result = price - (price * 0.3);
        }
        else if (stay > 7)
        {
            price = stay * 50;
            result = price - (price * 0.05);
        }
    }
    if (month == "june" || month == "september")
    {
        if (stay < 14)
        {
            result = stay * 75.20;
        }
        else if (stay > 14)
        {
            price = stay * 75.20;
            result = price - (price * 0.20);
        }
    }
    if (month == "july" || month == "august")
    {
        result = stay * 76;
    }

    return result;
}