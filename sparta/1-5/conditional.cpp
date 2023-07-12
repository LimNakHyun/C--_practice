#include <iostream>

int main()
{
    using namespace std;

    int carrots = 8;

    if (carrots < 5)
    {
        // buy new carrots!
        cout << "Let's buy some carrots!" << endl;
    }
    else if (carrots < 10)
    {
        cout << "um...." << endl;
    }
    else
    {
        // no need to buy carrots!
        cout << "No need to buy new carrots!" << endl;
    }

    return 0;
}