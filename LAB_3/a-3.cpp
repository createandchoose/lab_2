#include <iostream>

int main() {
  unsigned int x, p, y;
  std::cout << "Введите x: ";
  std::cin >> x;
  std::cout << "Введите p: ";
  std::cin >> p;

  std::cout << "Введите y: ";
  std::cin >> y;

  unsigned int years = 0;
  while (x < y) {
    x += (x * p) / 100;
    years++;
  }

  std::cout << "Через " << years << " лет" << std::endl;

  return 0;
}
