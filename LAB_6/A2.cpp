#include <iostream>
#include <vector>

int findFirstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

int main() {
    std::cout << "mass: ";
    
    std::vector<int> seq;
    int inp;

    while (std::cin >> inp) {
        seq.push_back(inp == 1 ? -1 : inp);
    }

    if (seq.empty()) {
        std::cerr << "mass" << std::endl;
        return 1;
    }

    std::vector<int> count_digits(9, 0);

    for (int num : seq) {
        int first_digit = findFirstDigit(std::abs(num));
        count_digits[first_digit - 1]++;
    }

    for (int count : count_digits) {
        std::cout << count << " ";
    }

    return 0;
}




// Ввод: 11 121 1789 4003 1999 512 8 666 31 5 10 62 Вывод: 5 0 1 1 2 2 0 1 0