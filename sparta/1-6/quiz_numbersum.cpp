#include <iostream>

int main()
{
    using namespace std;

    int inputNumber = 0;
    cout << "Please enter number: " << endl;
    cin >> inputNumber;

    int sum = 0;
    for(int i=1; i<=inputNumber; i++)
    {
        sum += i;
    }

    cout << "The Sum 1 to " << inputNumber << " is " << sum << endl;

    return 0;
}