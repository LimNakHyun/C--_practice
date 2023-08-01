// string.cpp
#include <iostream>

int main()
{
    using namespace std;
    string sparta = "Sparta";
    string coding = "Coding";
    string club = "Club";
    string result = sparta + coding + club;

    cout << result << endl;
    cout << result.size() << endl;
    cout << result.substr(sparta.size(), result.size()) << endl;
    cout << result.find(club) << endl;
    return 0;
}