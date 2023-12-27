// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        while ((0 <= a[i]) == (0 <= a[i + 1]) && i < a.size() - 1) {
            int sum = a[i] + a[i + 1];
            a.insert(a.begin() + i, sum);
            a.erase(a.begin() + i + 1, a.begin() + i + 3);
        }
    }
}

int main(){
    //Dulustan's tests
    {
        vector<int> v;

        v = {1, 2, -3, -4, -5, 6};
        solve(v);
        assert(v == vector<int>({3, -12, 6}));

        v = {1, 2, 4, 8, 16};
        solve(v);
        assert(v == vector<int>({31}));

        v = {-6, 432, 21, 3456, -787, -2023, 40000};
        solve(v);
        assert(v == vector<int>({-6, 3909, -2810, 40000}));

        v = {-1'000'000, -2'000'000'000, 7'500, 90'000};
        solve(v);
        assert(v == vector<int>({-2'001'000'000, 97'500}));
    }

    //минимум 3 теста
    //Student's tests
    {
        vector<int> v;

        v = {6, 2, -1, -1, 8, 9, 10};
        solve(v);
        assert(v == vector<int>({8, -2, 27}));

        v = {1, 1, 1, 1, -1, -1, -1, -1, 2, -2};
        solve(v);
        assert(v == vector<int>({4, -4, 2, -2}));

        v = {5, 5, -5, -10, -15, 10, 10, 40, -1, -2, -3, -4, -5};
        solve(v);
        assert(v == vector<int>({10, -30, 60, -15}));
    }
}
