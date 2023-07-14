#include <iostream>

int main()
{
    using namespace std;

    int number = 0;
    cout << "Please enter number: " << endl;
    cin >> number;

    cout << "The divisors of " << number << " is..." << endl;
    for (int i=1; i<=number/2 + 1; i++)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }
    cout << number << endl;

    return 0;
}