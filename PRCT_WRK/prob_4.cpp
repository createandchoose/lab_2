#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Введите коэффициенты a, b и c: ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "2 ROOTS: " << root1 << " " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "1 ROOT: " << root << endl;
    } else {
        cout << "NO ROOTS" << endl;
    }

    return 0;
}