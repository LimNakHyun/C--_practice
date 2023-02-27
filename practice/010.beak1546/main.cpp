/*****************************************************************************
*                                                                            *
* ---------------------------- 백준 1546번 평균 ---------------------------- *
*                                                                            *
*****************************************************************************/

#include <iostream>

using namespace std;

// int main()
// {
//     int n, m = -1;
//     cin >> n;
//     float sum;
//     float a[n] = {0};
    
//     for(int i = 0; i < n; i++) {
//         float x;
//         cin >> x;
//         a[i] = x;
//         sum += x;
//         if(x > m) m = x;
//     }

//     cout << sum / m * 100 / n;

// }

int main()
{
    int n = 0;
    int a[1000];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long sum = 0;
    long m = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(a[i] > m) m = a[i];
    }

    double ans = sum * 100.0 / m / n;
    cout << ans;

}