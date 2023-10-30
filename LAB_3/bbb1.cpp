#include <iostream>

int main() {
    const int count = 6;  
    double sum = 0.0;   
    double average = 0.0; 

    for (int i = 0; i < count; i++) {
        double number;
        std::cout << "Введите число " << (i + 1) << ": ";
        std::cin >> number;
        sum += number;
    }

    average = sum / count;

    std::cout << "Среднее значение: " << average << std::endl;

    return 0;
}