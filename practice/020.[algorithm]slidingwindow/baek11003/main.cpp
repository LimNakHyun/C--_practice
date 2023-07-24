#include <iostream>
#include <deque>
using namespace std;
typedef pair<int, int> Node;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    deque<Node> tempdeque;
    
    int N, L;
    cin >> N >> L;
    for (int i=0; i<N; i++)
    {
        int now;
        cin >> now;
        while (tempdeque.size() && tempdeque.back().second > now)
        {
            tempdeque.pop_back();
        }
        tempdeque.push_back(Node(i, now));
        if (tempdeque.front().first <= i - L)
        {
            tempdeque.pop_front();
        }
        cout << tempdeque.front().second << ' ';
    }
}