#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    vector<int> A(N, 0);
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cout << "\n";
    
    for(int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    
    sort(A.begin(), A.end());
    
    for(int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    
    int ANS = 0;
    
    for(int i = 0; i < N; i++)
    {
        int temp = A[i];
        int sta = 0;
        int end = N - 1;
        
        while(sta < end)
        {
            if(A[sta] + A[end] < temp)
            {
                sta++;
            }
            else if(A[sta] + A[end] > temp)
            {
                end--;
            }
            else
            {
                ANS++;
                break;
            }
        }
    }

    cout << ANS;
}