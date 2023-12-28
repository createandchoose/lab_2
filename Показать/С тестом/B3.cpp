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

int main(){
    //Dulustan's tests
    {
        vector<double> x, y;

        x = vector<double>{5,4,3,2,1};
        y = vector<double>{5,4,3,2,1};
        assert(abs(solve(x, y) - 1.41421356237) < EPS);

        x = vector<double>{0, -50};
        y = vector<double>{50, 0};
        assert(abs(solve(x, y) - 70.7106781187) < EPS);

        x = vector<double>{2, 11.11, 10.5, 5, 3, 0};
        y = vector<double>{6, -3.14, 0.92, 6, 1, 0};
        assert(abs(solve(x, y) - 3.0) < EPS);
    }

    //1 тест с 3 точками, 1 тест с 5 точками, 1 тест с 7 точками
    //Student's tests
    {
        vector<double> x, y;

        x = vector<double>{1, 2, 3};
        y = vector<double>{4, 5, 6};
        assert(abs(solve(x, y) - sqrt(2)) < EPS);

        x = vector<double>{10, 20, 30, 100, 200};
        y = vector<double>{22, 25, 27, 150, 250};
        assert(abs(solve(x, y) - sqrt(104)) < EPS);

        x = vector<double>{7, 9, 15, 28, 102, 845, 2756};
        y = vector<double>{4, 5, 26, 84, 201, 746, 1011};
        assert(abs(solve(x, y) - sqrt(5)) < EPS);
    }
}
