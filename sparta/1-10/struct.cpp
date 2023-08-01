// struct.cpp
#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    Person p1;
    p1.name = "John Doe";
    p1.age = 20;

    Person p2 = {"Jane", 30};

    cout << p1.name << endl;
    cout << p2.name << endl;

    return 0;
}