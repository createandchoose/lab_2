// #define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

const double EPS = 1e-6;

double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double solve(vector<double> x, vector<double> y) {
    double ans = 2e9;
    for (int i = 0; i < x.size() - 1; i++) {
        for (int j = i + 1; j < x.size(); j++) {
            ans = min(ans, dist(x[i], y[i], x[j], y[j]));
        }
    }
    return ans;
}

//!здесь все числа вещественные!
//при сравнении двух вещ. чисел на равенство мы сравниваем их разницу
//с маленькой константой EPS

int main() {
    // Dulustan's tests
    {
        std::vector<double> x, y;

        x = std::vector<double>{5, 4, 3, 2, 1};
        y = std::vector<double>{5, 4, 3, 2, 1};
        double result = solve(x, y);
        assert(std::abs(result - 1.41421356237) < EPS);
        std::cout << "Dulustan's Test 1 passed. Result: " << result << std::endl;

        x = std::vector<double>{0, -50};
        y = std::vector<double>{50, 0};
        result = solve(x, y);
        assert(std::abs(result - 70.7106781187) < EPS);
        std::cout << "Dulustan's Test 2 passed. Result: " << result << std::endl;

        x = std::vector<double>{2, 11.11, 10.5, 5, 3, 0};
        y = std::vector<double>{6, -3.14, 0.92, 6, 1, 0};
        result = solve(x, y);
        assert(std::abs(result - 3.0) < EPS);
        std::cout << "Dulustan's Test 3 passed. Result: " << result << std::endl;
    }

    // Student's tests
    {
        std::vector<double> x, y;

        x = std::vector<double>{1, 2, 3};
        y = std::vector<double>{4, 5, 6};
        double result = solve(x, y);
        assert(std::abs(result - std::sqrt(2)) < EPS);
        std::cout << "Student's Test 1 passed. Result: " << result << std::endl;

        x = std::vector<double>{10, 20, 30, 100, 200};
        y = std::vector<double>{22, 25, 27, 150, 250};
        result = solve(x, y);
        assert(std::abs(result - std::sqrt(104)) < EPS);
        std::cout << "Student's Test 2 passed. Result: " << result << std::endl;

        x = std::vector<double>{7, 9, 15, 28, 102, 845, 2756};
        y = std::vector<double>{4, 5, 26, 84, 201, 746, 1011};
        result = solve(x, y);
        assert(std::abs(result - std::sqrt(5)) < EPS);
        std::cout << "Student's Test 3 passed. Result: " << result << std::endl;
    }

    return 0;
}
