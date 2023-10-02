#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Введите дату в формате dd mm yyyy: ";
    cin >> day >> month >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (year < 1 || month < 1 || month > 12 || day < 1) {
        cout << "Введена некорректная дата." << endl;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        cout << "Введена некорректная дата." << endl;
    } else if (month == 2) {
        if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
            cout << "Введена некорректная дата." << endl;
        } else {
            cout << "Дата корректна." << endl;
        }
    } else if (day > 31) {
        cout << "Введена некорректная дата." << endl;
    } else {
        cout << "Дата корректна." << endl;
    }

    return 0;
}
