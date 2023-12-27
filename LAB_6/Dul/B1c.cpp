// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

void my_insert(vector<int> &a, int x, int k) {
    a.push_back(x);
    for (int i = a.size() - 2; k <= i; i--) {
        swap(a[i], a[i + 1]);
    }
}

void my_erase(vector<int> &a, int k) {
    for (int i = k + 1; i < a.size(); i++) {
        swap(a[i - 1], a[i]);
    }
    a.pop_back();
}

void solve(vector<int> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        while ((0 <= a[i]) == (0 <= a[i + 1]) && i < a.size() - 1) {
            my_insert(a, a[i] + a[i + 1], i);
            my_erase(a, i + 1);
            my_erase(a, i + 1);
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
