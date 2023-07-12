#include <iostream>

int main()
{
    using namespace std;

    int year, month, day;
    int thisYear = 2023;

    cout << "Year? " << endl;
    cin >> year;

    cout << "Month? " << endl;
    cin >> month;

    cout << "Day? " << endl;
    cin >> day;

    if (thisYear - year >= 20)
    {
        cout << "Welcome!" << endl;
    }
    else
    {
        cout << "Out!" << endl;
    }

    return 0;
}