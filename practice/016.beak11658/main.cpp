/*****************************************************************************
*                                                                            *
* ---------------------- 백준 11658번 구간 합 구하기 3 ---------------------- *
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
    // cout << "n값: " << n << "\n" << "m값: " << m << "\n";

    int **a, **b;
    a = new int*[n + 1]();
    for(int i = 0; i < n + 1; i++) {
        a[i] = new int[n + 1]();
    }
    b = new int*[n + 1]();
    for(int i = 0; i < n + 1; i++) {
        b[i] = new int[n + 1]();
    }

    // cout << "초기화된 a배열: " << "\n";
    // for(int i = 0; i < n + 1; i++) {
    //     for(int j = 0; j < n + 1; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            int temp;
            cin >> temp;
            a[i][j] = temp;
            b[i][j] = b[i - 1][j] + b[i][j - 1] + temp - b[i - 1][j - 1];
        }
    }

    // cout << "값을 입력한 a배열: " << "\n";
    // for(int i = 0; i < n + 1; i++) {
    //     for(int j = 0; j < n + 1; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int *x, *y, *z;
    x = new int[m + 1]();
    y = new int[m + 1]();
    z = new int[m + 1]();
    int t = 0;
    int x_length = 0;

    for(int i = 0; i < m; i++) {
        int w, x1, y1, x2, y2, c;
        cin >> w;
        // cout << "입력된 w값: " << w << "\n";

        if(w == 0) {
            cin >> x1 >> y1 >> c;
            // cout << "입력된 x1값: " << x1 << "\n" << "입력된 y1값: " << y1 << "\n" << "입력된 c값: " << c << "\n\n";
            x[t] = x1;
            y[t] = y1;
            z[t++] = c - a[x1][y1];
            x_length++;
        }
        else {
            int temp = 0;
            cin >> x1 >> y1 >> x2 >> y2;
            int ans = b[x2][y2] - (b[x1 - 1][y2] + b[x2][y1 - 1]) + b[x1 - 1][y1 - 1];
            // cout << "ans값: " << ans << "\n" << "temp값 : " << temp << "\n";

            int length_temp = x_length;
            while(length_temp > 0) {
                // cout << "temp값: " << temp << "\n";
                if((x2 >= x[temp]) && (y2 >= y[temp])) {
                    // cout << "x[temp]값: " << x[temp] << "\n" << "y[temp]값: " << y[temp++] << "\n\n";
                    if((x1 <= x[temp]) || (y1 <= y[temp])) {
                        ans += z[temp];
                    }
                }
                temp++;
                length_temp--;
            }
            cout << ans << "\n";
        }
    }

    cout << "값을 입력한 x배열: " << "\n";
    for(int i = 0; i < m + 1; i++) {
            cout << x[i] << " ";
    }
    cout << "\n";

    cout << "값을 입력한 y배열: " << "\n";
    for(int i = 0; i < m + 1; i++) {
            cout << y[i] << " ";
    }
    cout << "\n";

    cout << "값을 입력한 z배열: " << "\n";
    for(int i = 0; i < m + 1; i++) {
            cout << z[i] << " ";
    }
    cout << "\n";

    for(int i = 0; i < n + 1; i++) {
        delete [] a[i];
        delete [] b[i];
    }
    delete [] a, b, x, y, z;

}