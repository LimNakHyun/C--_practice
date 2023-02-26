/*****************************************************************************
*                                                                            *
* -------------------------- 백준 1997번 완전제곱수 ------------------------ *
*                                                                            *
*****************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n;
    cout << "m값과 n값을 입력하시오: ";
    cin >> m >> n;
    cout << "m값: " << m << "\n" << "n값: " << n << "\n\n";

    int min, max;
    int sqrt_m = sqrt(m);

    if(pow(sqrt_m, 2) == m) min = m;
    else min = sqrt_m + 1;

    int max = sqrt(n);

    for(int i = min; i <= max; i++) {

    }

    // if(perfect_sum == 0)
    //     cout << -1 << endl;
    // else
        // cout << perfect_sum << "\n" << min_perfect_number << endl;

}