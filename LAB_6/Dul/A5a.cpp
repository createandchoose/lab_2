// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &a, int l, int r){
    vector<int> b{a};
    a.insert(a.begin(), b.begin() + l, b.begin() + r + 1);
    a.erase(a.begin() + l + (r - l + 1), a.begin() + r + (r - l + 1) + 1);
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
