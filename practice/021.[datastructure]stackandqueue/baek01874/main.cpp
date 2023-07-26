#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stk;

    // cout << "stk.empty(): " << stk.empty() << endl;

    int n;
    cout << "enter n: " << endl;
    cin >> n;
    cout << "print n: " << endl;

    int* arr = new int[n] {0,};

    for (int i=0; i<n; i++)
    {
        int now;
        // cin >> now;
        // cout << "now val: " << endl;
        // stk.push(i + 1);
        cin >> arr[i];
    }
    cout << "\n" << endl;

    int arridx = 0;
    int stkidx = 1;

    while (arridx < n)
    {
        while (arr[arridx] >= stkidx)
        {
            stk.push(stkidx);
            cout << "+" << endl;
            if (arr[arridx] == stkidx)
            {
                stk.pop();
                cout << "-" << endl;
            }
            stkidx++;
        }
        arridx++;
        while (arr[arridx] < stkidx)
        {
            if (stk.top() == arr[arridx])
            {
                stk.pop();
                cout << "-" << endl;
                arridx++;
            }
            else
            {
                arridx = n;
                cout << "NO" << endl;
                break;
            }
        }
    }

    delete[] arr;






    // cout << "array print: " << endl;
    // for (int i=0; i<n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n" << endl;

    // cout << "stack print: " << endl;
    // while (!stk.empty()) {
    //     cout << stk.top() << " ";
    //     stk.pop();
    // }
    // cout << "\n" << endl;

    return 0;
}