#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::cout << "vvot: ";
    std::vector<int> arr;
    int input;
    while (std::cin >> input) {
        arr.push_back(input);
    }

    if (arr.size() % 3 != 0) {
        std::cerr << "mass = " << std::endl;
        return 1;
    }

    for (auto it = arr.begin(); it != arr.end(); it += 3) {
        std::rotate(it, it + 2, it + 3);
    }

    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }

    return 0;
}


// Ввод: 6 4 76 -1 -7 15 -33 Вывод: 76 -1 4 15 -33 -7