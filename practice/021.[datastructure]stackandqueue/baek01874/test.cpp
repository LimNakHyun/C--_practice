#include <iostream>
#include <vector>
#include <stack>

int main()
{
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stk;
    vector<string> vtr;

    int n;
    cin >> n;
    int* arr = new int[n] {0,};

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int stkidx = 1;
    for (int i=0; i<n; i++)
    {
        if (arr[i] >= stkidx)
        {
            while (arr[i] >= stkidx)
            {
                stk.push(stkidx++);
                vtr.push_back("+");
            }
            stk.pop();
            vtr.push_back("-");
        }
        else  // arr[i] < stkidx
        {
            if (stk.top() > arr[i])
            {
                cout << "NO";
                break;
            }
            else
            {
                stk.pop();
                vtr.push_back("-");
            }
        }
    }
    if (stk.empty())
    {
        for (int i=0; i<vtr.size(); i++)
        {
            cout << vtr[i] << "\n";
        }
    }
    delete[] arr;
    return 0;
}