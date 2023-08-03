#include <iostream>
#include <vector>
#include <queue>

struct compare
{
    bool operator()(int o1, int o2)
    {
        int first_abs = abs(o1);
        int second_abs = abs(o2);
        if (first_abs == second_abs)
        {
            return o1 > o2;
        }
        else
        {
            return first_abs > second_abs;
        }
    }
};

int main()
{
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::priority_queue<int, std::vector<int>, compare> minHeap;
    
    int N;
    std::cin >> N;
    
    for (int i=0; i<N; i++)
    {
        int x;
        std::cin >> x;
        if (x != 0)
        {
            minHeap.push(x);
        }
        else
        {
            if (!minHeap.empty())
            {
                std::cout << minHeap.top() << '\n';
                minHeap.pop();
            }
            else
            {
                std::cout << "0\n";
            }
        }
    }

    return 0;
}