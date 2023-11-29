#include <iostream>

void swapAdjacentElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6}; 

    std::cout << "mass: ";
    printArray(arr, size);

    swapAdjacentElements(arr, size);

    std::cout << "mass res: ";
    printArray(arr, size);

    return 0;
}


// Пример. Ввод: 7 4 76 -1 -7 15 -33 5 Вывод: 76 4 -7 -1 -33 15 5