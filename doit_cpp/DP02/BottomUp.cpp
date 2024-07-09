#include <iostream>
#include <vector>

static int N;
static std::vector<int> D;

int main()
{
    std::cin >> N;
    D.resize(N + 1);

    for(int i=0; i<N+1; i++)
    {
        D[i] = -1;
    }
    D[0] = 0;
    D[1] = 1;

    for(int i=2; i<N+1; i++)
    {
        D[i] = D[i - 1] + D[i - 2];
    }
    std::cout << D[N];
}