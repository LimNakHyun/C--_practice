#include <iostream>

int main()
{
    using namespace std;
    int floor = 4;
    int room = 8;

    for(int i=0; i<floor; i++)
    {
        for(int j=0; j<room; j++)
        {
            cout << "Floor: " << (i + 1) * 100 + (j + 1) << endl;
        }
        cout << endl;
    }

    return 0;
}