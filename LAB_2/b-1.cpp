#include <iostream>

int main() {
    double x, y;
    std::cout << "Введите точку x: ";
    std::cin >> x;
    std::cout << "Введите точку y: ";
    std::cin >> y;
    if ((y >= x) && (y >= -x) && (y >= (x * x) - 2)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}