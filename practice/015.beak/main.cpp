/*****************************************************************************
*                                                                            *
* ------------------------- 백준 2018번 수들의 합 5 ------------------------- *
*                                                                            *
*****************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << "값: " << n << "\n";
    // n(a + a + (n - 1)d) / 2

    int c = sqrt(n) + 100;
    cout << "루트: " << c << "\n";
    int ans = 0;
    for(int i = 1; i < (n / 2) + 100; i++) {
        while((c * (2 * i + (c - 1))) > n * 2) c--;
        if((c * (2 * i + (c - 1))) == n * 2) {
            ans++;
            if(i == n) ans--;
            cout << "초항: " << i << ", 항 수: " << c << "\n";
        }
        if(c < 2) break;
        //cout << c << "\n";
    }
    // 초항은 계속 증가 항의 개수는 초항이 증가하다가 수열의 합이 n을 넘어서면 항 수를 감소

    cout << "답: " << ans + 1 << endl;
}