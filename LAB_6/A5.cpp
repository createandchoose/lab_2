#include <iostream>
#include <vector>
#include <algorithm>

void my_insert(std::vector<int> &v, const std::vector<int> &subarray, int k);
void my_insert(std::vector<int> &v, const std::vector<int> &subarray, int k) {
    v.insert(v.begin() + k, subarray.begin(), subarray.end());
}
void my_erase(std::vector<int> &v, int k);
void my_erase(std::vector<int> &v, int k) {
    v.erase(v.begin() + k);
}
void moveSubarraySTL(std::vector<int> &arr, int l, int r) {
    if (l < 0 || r >= arr.size() || l > r) {
        std::cerr << "Недопустимые значения l и r." << std::endl;
        return;
    }

    std::rotate(arr.begin(), arr.begin() + l, arr.begin() + r + 1);
}
void moveSubarrayCustom(std::vector<int> &arr, int l, int r) {
    if (l < 0 || r >= arr.size() || l > r) {
        std::cerr << "Недопустимые значения l и r." << std::endl;
        return;
    }

    std::vector<int> subarray(arr.begin() + l, arr.begin() + r + 1);
    arr.erase(arr.begin() + l, arr.begin() + r + 1);
    my_insert(arr, subarray, 0);
}

int main() {
    std::cout << "Введите массив целых чисел: ";
    std::vector<int> arr;
    int input;
    while (std::cin >> input) {
        arr.push_back(input);
    }

    int l, r;
    std::cout << "Введите значения l и r: ";
    std::cin >> l >> r;
    std::vector<int> arrCopy1 = arr; 
    moveSubarraySTL(arrCopy1, l, r);
    std::cout << "Результат (STL-функции): ";
    for (const auto &num : arrCopy1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> arrCopy2 = arr; 
    moveSubarrayCustom(arrCopy2, l, r);
    std::cout << "Результат (Свои функции): ";
    for (const auto &num : arrCopy2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
