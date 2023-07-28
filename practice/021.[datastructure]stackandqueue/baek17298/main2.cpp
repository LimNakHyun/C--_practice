#include <iostream>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::stack<int> stk;

    int A;
    std::cin >> A;

    int* arr = new int[A];
    for (int i=0; i<A; i++)
    {
        std::cin >> arr[i];
    }
    int* ans = new int[A];

    for (int i=A-1; i>=0; i--)
    {
        while (!stk.empty() && stk.top() <= arr[i])
        {
            stk.pop();
        }
        if (stk.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = stk.top();
        }
        stk.push(arr[i]);
    }

    delete[] arr;

    for (int i=0; i<A; i++)
    {
        std::cout << ans[i] << " ";
    }
    delete[] ans;

    return 0;
}