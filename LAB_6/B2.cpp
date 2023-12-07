#include <iostream>
#include <vector>

void removeNumbers(std::vector<int>& arr) {
    if (arr.size() < 3) {
        return;
    }

    int minValue = arr[0], maxValue = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        } else if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    int newSize = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == minValue + 1 || arr[i] == maxValue - 1 || arr[i] == minValue || arr[i] == maxValue) {
            arr[newSize++] = arr[i];
        }
    }

    arr.resize(newSize);
}

int main() {
    std::cout << "vood: ";
    std::vector<int> input;
    int value;

    while (std::cin >> value) {
        input.push_back(value);
    }

    removeNumbers(input);

    for (int i = 1; i < input.size(); ++i) {
        std::cout << input[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
