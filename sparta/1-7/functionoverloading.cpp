// functionoverloading.cpp
#include <iostream>

using namespace std;

int add(int a, int b);
int add(int a, int b, int c);

int main()
{
    cout << add(1, 2) << endl;
    cout << add(1, 2, 3) << endl;
    return 0;
}

int add(int a, int b)
{
    cout << "addTwo" << endl;
    return a+b;
}

int add(int a, int b, int c)
{
    cout << "addThree" << endl;
    return a+b+c;
}