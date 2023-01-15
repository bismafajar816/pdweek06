#include <iostream>
using namespace std;
string zodiac(int date, string month);
main()
{
    int date;
    string month;
    cout << "enter date:";
    cin >> date;
    cout << "enter month:";
    cin >> month;
    string star = zodiac(date, month);
    cout << "your zodiac sign is:" << star;
}
string zodiac(int date, string month)
{
    string sign;
    if (month == "march" && (date >= 21 && date <= 31))
    {
        sign = "aries";
    }
    else if (month == "april" && (date > 1 && date <= 19))
    {
        sign = "aries";
    }
    if (month == "march" && (date > 1 && date <= 20))
    {
        sign = "pisces";
    }
    else if (month == "febraury" && (date > 1 && date <= 19))
    {
        sign = "pisces";
    }
    if (month == "april" && (date >= 20 && date <= 30))
    {
        sign = "taurus";
    }
    else if (month == "may" && (date >= 1 && date <= 20))
    {
        sign = "taurus";
    }
    if (month == "may" && (date > 21 && date <= 31))
    {
        sign = "gemini";
    }
    else if (month == "june" && (date > 1 && date <= 20))
    {
        sign = "gemini";
    }
    if (month == "june" && (date >= 21 && date <= 30))
    {
        sign = "cancer";
    }
     else if (month == "july" && (date >= 1 && date <= 22))
    {
        sign = "cancer";
    }
    if (month == "july" && (date > 23 && date <= 31))
    {
        sign = "leo";
    }
    else if (month == "august" && (date >= 1 && date <= 22))
    {
        sign = "leo";
    }
    if (month == "august" && (date >= 23 && date <= 31))
    {
        sign = "virgo";
    }
    else if (month == "september" && (date >= 1 && date <= 22))
    {
        sign = "virgo";
    }
    if (month == "september" && (date > 23 && date <= 31))
    {
        sign = "libra";
    }
     else if (month == "october" && (date >= 1 && date <= 22))
    {
        sign = "libra";
    }
    if (month == "october" && (date >= 23 && date <= 31))
    {
        sign = "scorpio";
    }
    else  if (month == "november" && (date >= 1 && date <= 22))
    {
        sign = "scorpio";
    }
    if (month == "november" && (date >= 23 && date <= 31))
    {
        sign = "saggitarius";
    }
    if (month == "december" && (date >= 1 && date <= 21))
    {
        sign = "saggitarius";
    }
    else if (month == "december" && (date >= 22 && date <= 31))
    {
        sign = "capricorn";
    }
    if (month == "january" && (date >= 1 && date <= 19))
    {
        sign = "capricorn";
    }
    else if (month == "january" && (date >= 21 && date <= 31))
    {
        sign = "aquarius";
    }
    if (month == "febraury" && (date >= 1 && date <= 18))
    {
        sign = "aquarius";
    }
    return sign;
}
