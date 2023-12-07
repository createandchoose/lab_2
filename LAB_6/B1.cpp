#include <iostream>
#include <vector>

void processArrayWithFor(const std::vector<int>& input) {
    std::vector<int> result;
    int sum = input[0];

    for (int i = 1; i < input.size(); ++i) {
        if (input[i] * input[i - 1] > 0) {
            sum += input[i];
        } else {
            result.push_back(sum);
            sum = input[i];
        }
    }

    result.push_back(sum);

    for (int value : result) {
        std::cout << value << " ";
    }

    std::cout << std::endl;
}

void processArrayWithSTL(const std::vector<int>& input) {
    std::vector<int> result;
    int sum = input[0];

    for (auto it = input.begin() + 1; it != input.end(); ++it) {
        if (*it * *(it - 1) > 0) {
            sum += *it;
        } else {
            result.push_back(sum);
            sum = *it;
        }
    }

    result.push_back(sum);

    for (int value : result) {
        std::cout << value << " ";
    }

    std::cout << std::endl;
}

int main() {
    std::cout << "Enter integers separated by spaces: ";
    std::vector<int> input;
    int value;

    while (std::cin >> value) {
        input.push_back(value);
    }

    processArrayWithFor(input);
    processArrayWithSTL(input);

    return 0;
}
