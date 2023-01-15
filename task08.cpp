#include <iostream>
using namespace std;
main()
{
    int h, x, y;
    cout << "position of h:";
    cin >> h;
    cout << "position of x:";
    cin >> x;
    cout << "position of y:";
    cin >> y;
    if ((x == 1 && y == 1))
    {
        cout << "inside";
    }
    if ((x == 3 && y == 1) || (x == 3 && y == 3) || (x == 3 && y == 5) || (x == 3 && y == 7))
    {
        cout << "inside";
    }

    if ((x == 0 || x == 2 || x == 4 || x == 6) && (y == 0 || y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout << "border";
    }
    else
    {
        cout << "outside";
    }
}