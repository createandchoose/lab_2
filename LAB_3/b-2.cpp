#include <iostream>
#include <cmath>

int getNumberOfDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrongNumber(int number) {
    int numDigits = getNumberOfDigits(number);
    int sum = 0;
    int temp = number;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    return (sum == number);
}

int main() {
    for (int number = 1; number <= 9999; number++) {
        if (isArmstrongNumber(number)) {
            std::cout << number << " ";
        }
    }

    return 0;
}
