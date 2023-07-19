// reference.cpp
#include <iostream>

int main()
{
    using namespace std;

    int numOfWatermelons = 10;
    int &numOfMyFavouriteFruits = numOfWatermelons;

    numOfMyFavouriteFruits++;

    cout << numOfWatermelons << endl;
    cout << &numOfWatermelons << endl;
    cout << &numOfMyFavouriteFruits << endl;
}