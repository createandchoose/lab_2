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

void solve(vector<int> &a, int l, int r){
    int c = r - l + 1;
    while (c--) {
        my_insert(a, a[r], 0);
        my_erase(a, r + 1);
    }
}

int main(){

    //Dulustan's tests
    {
        vector<int> v;

        v = {1, 2, 3, 4, 5};
        solve(v, 1, 3);
        assert(v == vector<int>({2, 3, 4, 1, 5}));

        v = {2, 4, 8, 8, 8, 8, 8, 2};
        solve(v, 4, 7);
        assert(v == vector<int>({8, 8, 8, 2, 2, 4, 8, 8}));

        v = {-6, 432, 21, 3456, -787, 2020, 40000};
        solve(v, 1, 1);
        assert(v == vector<int>({432, -6, 21, 3456, -787, 2020, 40000}));

        v = {1'000'000, 2'000'000'000, 7'500, -90'000};
        solve(v, 0, 3);
        assert(v == vector<int>({1'000'000, 2'000'000'000, 7'500, -90'000}));
    }

    //минимум 3 теста
    //Student's tests
    {
        vector<int> v;

        v = {5, 2, 4, 3, 1};
        solve(v, 1, 2);
        assert(v == vector<int>({2, 4, 5, 3, 1}));

        v = {4, 3, 2, 1, 1, 2, 3, 4};
        solve(v, 4, 7);
        assert(v == vector<int>({1, 2, 3, 4, 4, 3, 2, 1}));

        v = {1, 3, 5, 7, 2, 4, 6};
        solve(v, 1, 6);
        assert(v == vector<int>({3, 5, 7, 2, 4, 6, 1}));
    }
}

