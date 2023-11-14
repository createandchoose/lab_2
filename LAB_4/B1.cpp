#include <iostream>
#include <vector>

bool isHamming(int n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    while (n % 5 == 0) {
        n /= 5;
    }
    return n == 1;
}

void generateHammingNumbers(int M, int N) {
    if (M <= 0 || M > N) {
        std::cout << "Error M и N\n";
        return;
    }

    std::vector<int> hammingNumbers;
    for (int i = 1; i <= N; ++i) {
        if (isHamming(i)) {
            hammingNumbers.push_back(i);
        }
    }

    std::cout << "[" << M << ", " << N << "]:\n";
    for (int num : hammingNumbers) {
        if (num >= M) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int M, N;

    std::cout << "M and N (0 < M <= N): ";
    std::cin >> M >> N;

    generateHammingNumbers(M, N);

    return 0;
}
