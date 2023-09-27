#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите целое четырехзначное число (> 0): ";
    cin >> number;
    if (number <= 0 || number < 1000 || number > 9999) {
        cout << "Ошибка! Введите корректное четырехзначное число." << endl;
        return 1;
    }
    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 1000) % 10;
    
    int sum_of_squares = digit1 * digit1 + digit2 * digit2 + digit3 * digit3 + digit4 * digit4;

    int reversed_number = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
    
    cout << "Сумма квадратов цифр: " << sum_of_squares << endl;
    cout << "Обратное число: " << reversed_number << endl;
    
    return 0;
}