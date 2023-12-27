// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &v) {
    int mi = *min_element(v.begin(), v.end()), ma = *max_element(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (1 < abs(mi - v[i]) && 1 < abs(ma - v[i])) {
            v.erase(v.begin() + i);
            i--;
        }
    }
}

int main(){
    //Dulustan's tests
    {
        vector<int> v;

        v = {1, 3, 5, 4, 2, 6};
        solve(v);
        assert(v == vector<int>({1, 5, 2, 6}));

        v = {6, 4, 6, 7, 0, 1, 0, 3};
        solve(v);
        assert(v == vector<int>({6, 6, 7, 0, 1, 0}));

        v = {-1, 0, -5, -9, -2, -10, -6, -9};
        solve(v);
        assert(v == vector<int>({-1, 0, -9, -10, -9}));

        v = {777, 776, 778, 7, 7, 8};
        solve(v);
        assert(v == vector<int>({777, 778, 7, 7, 8}));
    }

    //минимум 3 теста
    //Student's tests
    {
        vector<int> v;

        v = {1, 1, 1, 2, 2, 2};
        solve(v);
        assert(v == vector<int>({1, 1, 1, 2, 2, 2}));

        v = {5, 5, 6, 6, 4, 4, 8, 8, 7, 7};
        solve(v);
        assert(v == vector<int>({5, 5, 4, 4, 8, 8, 7, 7}));

        v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        solve(v);
        assert(v == vector<int>({1, 2, 9, 10, 9, 2, 1}));
    }
}
