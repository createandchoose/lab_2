// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-6;

//!здесь все числа вещественные!
//при сравнении двух вещ. чисел на равенство мы сравниваем их разницу
//с маленькой константой EPS

double solve(vector<long long> &x, vector<long long> &y) {
    double min_area = 1e18;
    for (int i = 0; i < x.size() - 2; i++) {
        for (int j = i + 1; j < x.size() - 1; j++) {
            for (int k = j + 1; k < x.size(); k++) {
                pair<double, double> z1 = {x[i], y[i]}, z2 = {x[j], y[j]}, z3 = {x[k], y[k]};
                double a = sqrt((z1.first - z2.first) * (z1.first - z2.first) + (z1.second - z2.second) * (z1.second - z2.second));
                double b = sqrt((z1.first - z3.first) * (z1.first - z3.first) + (z1.second - z3.second) * (z1.second - z3.second));
                double c = sqrt((z3.first - z2.first) * (z3.first - z2.first) + (z3.second - z2.second) * (z3.second - z2.second));
                double p = (a + b + c) / 2;
                min_area = min(min_area, sqrt(p * (p - a) * (p - b) * (p - c)));
            }
        }
    }
    return min_area;
}

int main(){
    //Dulustan's tests
    {
        vector<long long> x, y;

        x = vector<long long>{0, 1, 7, -1, 8};
        y = vector<long long>{0, -1, 3, -1, 0};
        assert(abs(solve(x, y) - 1.0) < EPS);

        x = vector<long long>{-10000, -9000, -8000, -7000, 0};
        y = vector<long long>{-100, -100, -100, -100, 100};
        assert(abs(solve(x, y) - 0.0) < EPS);

        x = vector<long long>{0, 3, 6, 3, 0, -3};
        y = vector<long long>{0, 0, 2, 4, 4, 2};
        assert(abs(solve(x, y) - 3.0) < EPS);
    }

    //1 тест с 3 точками, 1 тест с 5 точками, 1 тест с 7 точками
    //Student's tests
    {
        vector<long long> x, y;

        x = {-8, 5, 3};
        y = {3, -6, 2};
        assert(abs(solve(x, y) - 43) < EPS);

        x = {5, -10, -8, 9, 3};
        y = {-5, 8, 9, -10, -8};
        assert(abs(solve(x, y) - 4.5) < EPS);

        x = {9, 6, -1, -2, -3, 13, -41};
        y = {-42, 63, 41, 11, -54, -42, 70};
        assert(abs(solve(x, y) - 17.5) < EPS);
    }
}
