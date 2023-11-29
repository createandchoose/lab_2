#include <iostream>
#include <vector>

int ASS(const std::vector<int>& arr) {
    int count = 0;
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[i - 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> arr;
    int num;
    std::cout << "vvedite mass: ";
    while (std::cin >> num) {
        arr.push_back(num);
    }
    int result = ASS(arr);
    std::cout << "result: " << result << std::endl;
    return 0;
}
