#include <iostream>
#include <queue>

int main()
{
    auto compare = [](const std::pair<int, int>& a, const std::pair<int, int>& b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first > b.first;
    };

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(compare)> minHeap(compare);

    minHeap.push({10, 1});
    minHeap.push({5, 4});
    minHeap.push({15, 1});
    minHeap.push({10, -1});

    std::cout << "Priority Queue size: " << minHeap.size() << std::endl;

    while (!minHeap.empty())
    {
        // std::cout << minHeap.top().first << ", " << minHeap.top().second << std::endl;
        std::cout << minHeap.top().second << std::endl;
        minHeap.pop();
    }

    return 0;
}