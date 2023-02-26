/*****************************************************************************
*                                                                            *
* ------------------------- 백준 11720번 숫자의 합 ------------------------- *
*                                                                            *
*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string numbers;
    int len, sum = 0;
    cin >> len >> numbers;
    for(int i = 0; i < numbers.length(); i++) {
        sum += numbers[i] - '0';
    }
    cout << sum << endl;
}