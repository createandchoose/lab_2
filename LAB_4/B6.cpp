#include <iostream>

void intersect(int a, int b, int c, int d, int &l, int &r) {
    if (b < c || d < a) {
        l = 0;
        r = -1;
    } else {
        l = std::max(a, c);
        r = std::min(b, d);
    }
}

int main() {
    int a, b, c, d, l, r;

    std::cout << "[a, b]: ";
    std::cin >> a >> b;

    std::cout << "[c, d]: ";
    std::cin >> c >> d;

    intersect(a, b, c, d, l, r);

    if (l == 0 && r == -1) {
        std::cout << "ne peresikaetstya" << std::endl;
    } else {
        std::cout << "peresechenie: [" << l << ", " << r << "]" << std::endl;
    }

    return 0;
}
