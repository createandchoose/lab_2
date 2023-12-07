#include <iostream>
#include <vector>

void my_insert(std::vector<int> &v, int x, int k) {
    if (k < 0 || k > v.size()) {
        std::cerr << "nedostupny index dlya vstavki" << std::endl;
        return;
    }

    v.insert(v.begin() + k, x);
}

void my_erase(std::vector<int> &v, int k) {

    if (k < 0 || k >= v.size()) {
        std::cerr << "nedostupny index for delete" << std::endl;
        return;
    }

    v.erase(v.begin() + k);
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Massive: ";
    for (const auto &num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    my_insert(numbers, 10, 2);
    std::cout << "Massive posle vstavki: ";
    for (const auto &num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    my_erase(numbers, 3);  
    std::cout << "posle delete: ";
    for (const auto &num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
