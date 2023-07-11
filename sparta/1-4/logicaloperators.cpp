#include <iostream>

int main()
{
    using namespace std;

    int watermelons = 3;
    cout << "watermelons: " << watermelons << endl;

    cout << "watermelons == 3: " << (watermelons == 3) << endl;
    cout << "!(watermelons == 3:) " << !(watermelons == 3) << endl;
    cout << "!true: " << !true << endl;
    cout << "!false: " << !false << endl;
    cout << "(false && false): " << (false && false) << endl;
    cout << "(false || true): " << (false || true) << endl;

    return 0;
}