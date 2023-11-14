#include <iostream>

bool perfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int M, N;

    std::cout << "M: ";
    std::cin >> M;
    std::cout << "N: ";
    std::cin >> N;

    if (M <= 0 || M > N) {
        std::cout << "Err M > 0 must be!" << std::endl;
        return 1;
    }
    std::cout << "a3[" << M << ", " << N << "]: ";
    for (int i = M; i <= N; ++i) {
        if (perfect(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
