#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
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

    int arridx = 0;
    int stkidx = 1;

    while (arridx < n)
    {
        while (arr[arridx] >= stkidx)
        {
            stk.push(stkidx);
            vtr.push_back("+");
            if (arr[arridx] == stkidx)
            {
                stk.pop();
                vtr.push_back("-");
            }
            stkidx++;
        }
        arridx++;
        while (arr[arridx] < stkidx)
        {
            if (stk.top() == arr[arridx])
            {
                stk.pop();
                vtr.push_back("-");
                arridx++;
            }
            else
            {
                arridx = n + 1;
                cout << "NO" << endl;
                break;
            }
        }
    }
    if(stkidx > n)
    {
        for (int i=0; i<vtr.size(); i++)
        {
            cout << vtr[i] << "\n";
        }
    }
    delete[] arr;
    return 0;
}