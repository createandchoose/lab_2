// #define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

//!функция solve должна менять свой аргумент!

void solve(vector<int> &a) {
    int min1 = 2e9, max1 = -2e9;
    for (auto& n : a) {
        min1 = min(min1, n);
        max1 = max(max1, n);
    }
    vector<int> ans;
    for (auto& n : a) {
        if (abs(n - min1) <= 1 || abs(n - max1) <= 1) {
            ans.push_back(n);
        }
    }
    a = ans;
}

int main(){
    //Dulustan's tests
    {
        vector<int> v;

        v = {1,3,5,4,2,6};
        solve(v);
        assert(v == vector<int>({1,5,2,6}));

        v = {6,4,6,7,0,1,0,3};
        solve(v);
        assert(v == vector<int>({6,6,7,0,1,0}));

        v = {-1,0,-5,-9,-2,-10,-6,-9};
        solve(v);
        assert(v == vector<int>({-1,0,-9,-10,-9}));

        v = {777,776,778,7,7,8};
        solve(v);
        assert(v == vector<int>({777,778,7,7,8}));
    }

    //минимум 3 теста
    //Student's tests
    {
        vector<int> v;

        v = {5, 5, 6, 7, 7, 10, 13, 13, 14, 15, 15};
        solve(v);
        assert(v == vector<int>({5, 5, 6, 14, 15, 15}));

        v = {2, 5, 6, 7, 7, 7};
        solve(v);
        assert(v == vector<int>({2, 6, 7, 7, 7}));

        v = {7, 1, 6, 2, 8, 4, 4, 7, 7};
        solve(v);
        assert(v == vector<int>({7, 1, 2, 8, 7, 7}));
    }
}
