#include <iostream>

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int get_last_digit(int num) {
    return num % 10;
}

void sort_by_last(int &a, int &b, int &c) {
    if (get_last_digit(a) > get_last_digit(b)) {
        swap(a, b);
    }
    if (get_last_digit(b) > get_last_digit(c)) {
        swap(b, c);
    }
    if (get_last_digit(a) > get_last_digit(b)) {
        swap(a, b);
    }
}

int main() {
    int a = 138, b = 2647, c = 36971;
    std::cout << "Before sorting: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    sort_by_last(a, b, c);
    std::cout << "After sorting by last digit: a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}
