#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << ": ";
    std::cin >> n;

    std::cout << ": ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }
    for (int i = 0; i < n - 1; ++i) {
        if ((numbers[i] > 0 && numbers[i + 1] > 0) || (numbers[i] < 0 && numbers[i + 1] < 0)) {
            std::cout << "as: " << numbers[i] << " and " << numbers[i + 1] << std::endl;
            return 0;
        }
    }
    std::cout << "." << std::endl;
    return 0;
}
