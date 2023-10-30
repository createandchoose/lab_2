#include <iostream>
using namespace std;

int main() {
    int n,c;
    double sum, sr;
    sum = 0;
    c = 6;
    for (int i = 0; i < c; i++) {
        cin >> n;
        sum += n;
    }

    sr = sum /c;
    cout << sr;

    return 0;
}