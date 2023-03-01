/*****************************************************************************
*                                                                            *
* --------------------------- 부분합 배열 구하기 --------------------------- *
*                                                                            *
*****************************************************************************/

#include <iostream>

using namespace std;

int* partial_sum(int a[], int s[], int len) {

    s[0] = a[0];

    for(int i = 1; i < len; i++) {
        s[i] = s[i - 1] + a[i];
    }

    return s;
}

int main()
{
    int len = 5;
    int a[len] {1, 2, 3, 4, 5};
    int s[len] {0};
    partial_sum(a, s, len);
    for(int i = 0; i < len; i++) {
        cout << s[i] << endl;
    }
}