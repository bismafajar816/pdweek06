#include <iostream>
using namespace std;
main()
{
    string weather, humidity;
    cout << "temperature is:";
    cin >> weather;
    cout << "humidity:";
    cin >> humidity;
    if (weather == "cold" && humidity == "dry")
    {
        cout << "play basketball";
    }
    if (weather == "cold" && humidity == "humid")
    {
        cout << "watch tv";
    }
    if (weather == "warm" && humidity == "humid")
    {
        cout << "swim";
    }
    if (weather == "warm" && humidity == "dry")
    {
        cout << "play tennis";
    }
}