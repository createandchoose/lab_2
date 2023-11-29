#include <iostream>
#include <vector>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "mass: ";
    std::vector<int> numbers;
    int num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    bool found_prime = false;
    std::cout << "result: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (is_prime(numbers[i])) {
            std::cout << i << " ";
            found_prime = true;
        }
    }

    if (!found_prime) {
        std::cout << "netu.";
    }

    return 0;
}
