#include <iostream>

int Syracuse(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
            n /= 2;
        }
        steps++;
    }
    return steps;
}

int main() {
    int M, N;

    std::cout << "M (0 < M): ";
    std::cin >> M;
    std::cout << "N (M < N): ";
    std::cin >> N;

    for (int i = M; i <= N; ++i) {
        int steps = Syracuse(i);
        std::cout << "for " << i << " steps budet: " << steps << std::endl;
    }

    return 0;
}
