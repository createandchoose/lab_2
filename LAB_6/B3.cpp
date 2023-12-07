#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    vector<double> y(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> y[i];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int width = x[n - 1] - x[0];
    double height = y[n - 1] - y[0];

    cout << (long long)width * (long long)height << endl;

    return 0;
}
