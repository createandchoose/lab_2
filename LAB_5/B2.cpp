#include <iostream>
#include <vector>

int main() {
    // Ввод массива
    std::cout << "Введите элементы массива, разделенные пробелами: ";
    std::vector<int> array;
    int num;
    while (std::cin >> num) {
        array.push_back(num);
    }

    // Поиск максимального и минимального элементов в массиве
    int maxElement = array[0];
    int minElement = array[0];
    for (int i = 1; i < array.size(); ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
        if (array[i] < minElement) {
            minElement = array[i];
        }
    }

    // Создание нового массива без удаленных элементов
    std::vector<int> newArray;
    for (int i = 0; i < array.size(); ++i) {
        if (std::abs(array[i] - maxElement) <= 1 && std::abs(array[i] - minElement) <= 1) {
            newArray.push_back(array[i]);
        }
    }

    // Замена оригинального массива новым массивом
    array = newArray;

    // Вывод результата
    std::cout << "Итоговый массив: ";
    for (int i = 0; i < array.size(); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
