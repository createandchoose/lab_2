// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &a){
    for (auto it = a.begin() + 2; it < a.end(); it += 3) {
        swap(*(it - 2), *(it - 1));
        swap(*(it - 1), *it);
    }
    if (a.size() % 3 == 2) {
        swap(*(a.end() - 2), *(a.end() - 1));
    }
}

int main(){
    //Dulustan's tests
    {
        vector<int> v;

        v = {4, 76, -1, -7, 15, -33};
        solve(v);
        assert(v == vector<int>({76, -1, 4, 15, -33, -7}));

        v = {1, 3, 5, 4, 2, 6};
        solve(v);
        assert(v == vector<int>({3, 5, 1, 2, 6, 4}));

        v = {1, 1, 4, 1, 5, 8, 6, 3, 5, 1, 6, 0};
        solve(v);
        assert(v == vector<int>({1, 4, 1, 5, 8, 1, 3, 5, 6, 6, 0, 1}));

        v = {57, 1023, -3213};
        solve(v);
        assert(v == vector<int>({1023, -3213, 57}));
    }

    //минимум 3 теста
    //Student's tests
    {
        vector<int> v;

        v = {6, 5, 4, 3, 2, 1};
        solve(v);
        assert(v == vector<int>({5, 4, 6, 2, 1, 3}));

        v = {1, 3, 5, 2, 4, 6};
        solve(v);
        assert(v == vector<int>({3, 5, 1, 4, 6, 2}));

        v = {9, 8, 7, 6, 5, 4, 3, 2, 1};
        solve(v);
        assert(v == vector<int>({8, 7, 9, 5, 4, 6, 2, 1, 3}));
    }
}
