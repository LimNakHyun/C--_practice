/*****************************************************************************
*                                                                            *
* ---------------------- 백준 11659번 구간 합 구하기 4 --------------------- *
*                                                                            *
*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    // cout << n << " " << m << "\n" << endl;

    int s[100001];
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        s[i + 1] = s[i] + temp;
    }
    // for(int i = 0; i < n + 1; i++) {
    //     cout << s[i] << " ";
    // }

    for(int k = 0; k < m; k++) {
        int i, j;
        cin >> i >> j;
        cout << s[j] - s[i - 1] << "\n";
    }
}