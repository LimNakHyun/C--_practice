#include <iostream>
#include <vector>
#include <queue>

const int MAX_N = 300001;
std::vector<std::vector<int>> G(MAX_N);
std::vector<int> H(MAX_N, -1);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M, K, X;
    std::cin >> N >> M >> K >> X;

    for (int i = 0; i < M; i++) {
        int A, B;
        std::cin >> A >> B;
        G[A].push_back(B);
    }

    std::queue<int> Q;
    Q.push(X);
    H[X] = 0;

    while (!Q.empty()) {
        int node = Q.front();
        Q.pop();
        if (H[node] == K) {
            break; // 거리 K에 도달하면 더 이상 탐색하지 않음
        }
        for (int neighbor : G[node]) {
            if (H[neighbor] == -1) {
                H[neighbor] = H[node] + 1;
                Q.push(neighbor);
            }
        }
    }

    bool value_check = false;
    for (int i = 1; i <= N; i++) {
        if (H[i] == K) {
            if (!value_check) {
                value_check = true;
            }
            std::cout << i << '\n';
        }
    }

    if (!value_check) {
        std::cout << -1 << '\n';
    }

    return 0;
}
