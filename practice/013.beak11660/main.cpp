/*****************************************************************************
*                                                                            *
* ---------------------- 백준 11660번 구간 합 구하기 5 --------------------- *
*                                                                            *
*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << "n: " << n << "\n";
    cout << "m: " << m << endl;

    int **a;
    a = new int*[n + 1]();
    for(int i = 0; i < n + 1; i++) {
        a[i] = new int[n + 1]();
    }

    cout << "초기화한 배열" << endl;
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < n + 1; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            int temp;
            cin >> temp;
            a[i][j] = a[i - 1][j] + a[i][j - 1] + temp - a[i - 1][j - 1];
        }
    }

    cout << "값을 넣은 배열" << endl;
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < n + 1; j++) {
            cout << a[i][j] << "   ";
        }
        cout << "\n\n";
    }

    for(int i = 0; i < n + 1; i++) {
        delete [] a[i];
    }
    delete [] a;
}