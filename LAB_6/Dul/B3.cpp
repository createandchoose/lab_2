// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

long long solve(vector<long long> &x, vector<long long> &y) {
    long long minx = 1e18, miny = 1e18, maxx = -1e18, maxy = -1e18;
    for (int i = 0; i < x.size(); i++) {
        minx = min(minx, x[i]);
        maxx = max(maxx, x[i]);
        miny = min(miny, y[i]);
        maxy = max(maxy, y[i]);
    }
    return (maxx - minx) * (maxy - miny);
}

int main(){
    //Dulustan's tests
    {
        vector<long long> x, y;

        x = {2, 7, 5};
        y = {2, 3, -1};
        assert(solve(x, y) == 20);

        x = {-3, 2, 6, 8, 6, -3, 2};
        y = {-2, 3, -2, -1, 4, 4, -1};
        assert(solve(x, y) == 66);

        x = {100'000'000, -500'000'000, 1'000'000, 1'000'000'000};
        y = {1'000'000, 1'000'000, -1'000'000, -10'000'000};
        assert(solve(x, y) == 16'500'000'000'000'000);
    }

    //1 тест с 4 точками, 1 тест с 7 точками
    //Student's tests
    {
        vector<long long> x, y;

        x = {-10, -5, 5, 10};
        y = {-30, 40, -20, 10};
        assert(solve(x, y) == 1400);

        x = {-40, -30, 20, 10, 0, 70, 90};
        y = {1, 2, 3, -10000, 4, 5, 10000000};
        assert(solve(x, y) == 1301300000);
    }
}
