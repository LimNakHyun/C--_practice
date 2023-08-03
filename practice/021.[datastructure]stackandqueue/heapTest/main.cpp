#include <iostream>
#include <queue>

int main()
{
    // std::priority_queue<int> maxHeap;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);

    std::cout << "Priority Queue size: " << minHeap.size() << std::endl;

    while (!minHeap.empty())
    {
        std::cout << minHeap.top() << " ";
        minHeap.pop();
    }
    std::cout << std::endl;

    return 0;
}