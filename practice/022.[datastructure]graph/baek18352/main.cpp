#include <iostream>
#include <vector>
#include <queue>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::vector<std::vector<int>> G;
    G.resize(300001);
    std::vector<int> H(300001, -1);
    std::queue<int> Q;

    // N: 도시의 개수, M: 도로의 개수, K: 거리 정보, X: 출발 도시의 번호
    int N, M, K, X;

    std::cin >> N >> M >> K >> X;

    for (int i=0; i<M; i++)
    {
        // A: 시작노드, B: 도착노드
        int A, B;
        std::cin >> A >> B;

        G[A].push_back(B);
    }

    // for (int i=1; i<=N; i++)
    // {
    //     std::cout << i << "th NODE: ";
    //     for (int j=0; j<G[i].size(); j++)
    //     {
    //         std::cout << G[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // for (int i=1; i<=N; i++)
    // {
    //     std::cout << H[i] << " ";
    // }
    // std::cout << std::endl;

    Q.push(X);
    H[X] = 0;

    while (1)
    {
        int temp = Q.front();
        for (int i=0; i<G[temp].size(); i++)
        {
            Q.push(G[temp][i]);
            int distance = H[temp] + 1;
            if (distance > K)
            {
                break;
            }
            if (H[G[temp][i]] < 0)
            {
                H[G[temp][i]] = distance;
            }
        }
        // std::cout << "temp: " << temp << std::endl;
        Q.pop();

        if (Q.empty())
        {
            break;
        }
    }

    // for (int i=1; i<=N; i++)
    // {
    //     std::cout << H[i] << " ";
    // }
    // std::cout << std::endl;

    int value_check = false;
    for (int i=1; i<=N; i++)
    {
        // std::cout << H[i] << " ";
        if (H[i] == K)
        {
            if (!value_check)
            {
                value_check = true;
            }
            std::cout << i << '\n';
        }
    }

    if (!value_check)
    {
        std::cout << -1 << '\n';
    }

    return 0;

}