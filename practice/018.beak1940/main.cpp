#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> A(N, 0);
    cout << "N값: " << N << "\n" << "M값: " << M << "\n";

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";

    // partition(0, N - 1);
    sort(A.begin(), A.end());
    for(int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    
    int i = 0, j = N - 1;
    int ANS = 0;
    
    while(i < j)
    {
        if(A[i] + A[j] == M)
        {
            cout << "\nA[i]: " << A[i] << "\n" << "A[j]: " << A[j] << "\n";
            i++;
            j--;
            ANS++;
        }
        else if(A[i] + A[j] < M)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << "답: " << ANS << endl;
}