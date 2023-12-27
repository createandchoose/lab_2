//#define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

void solve(vector<int> &a, vector<int> &b){
    for (int i = 0; i < a.size(); i++) {
        if (b[i] < a[i]) {
            swap(a[i], b[i]);
        }
    }
}

int main(){
    //Dulustan's tests
    {
        vector<int> a, b;

        a = vector<int>{1,2,3,4,5};
        b = vector<int>{5,4,3,2,1};
        solve(a, b);
        assert(a == vector<int>({1,2,3,2,1}));
        assert(b == vector<int>({5,4,3,4,5}));

        a = vector<int>{-7, 7,  11, -8, 22,  31, -50};
        b = vector<int>{7, -77, 88, 31, -19, 0,  -46};
        solve(a, b);
        assert(a == vector<int>({-7, -77, 11, -8, -19, 0, -50}));
        assert(b == vector<int>({7,  7,   88, 31, 22, 31, -46}));

        a = vector<int>{789987, 2022};
        b = vector<int>{789789, 2023};
        solve(a, b);
        assert(a == vector<int>({789789, 2022}));
        assert(b == vector<int>({789987, 2023}));

        a = vector<int>{5,5,5,5,5,5,5,5,5,5,5,2};
        b = vector<int>{4,4,4,4,4,4,4,4,4,4,4,5};
        solve(a, b);
        assert(a == vector<int>({4,4,4,4,4,4,4,4,4,4,4,2}));
        assert(b == vector<int>({5,5,5,5,5,5,5,5,5,5,5,5}));
    }

    //минимум 3 теста
    //Student's tests
    {
        vector<int> a, b;

        a = vector<int>{5, 4, 3, 2, 1};
        b = vector<int>{1, 2, 3, 4, 5};
        solve(a, b);
        assert(a == vector<int>({1, 2, 3, 2, 1}));
        assert(b == vector<int>({5, 4, 3, 4, 5}));

        a = vector<int>{4, 2, 3, 1};
        b = vector<int>{2, 3, 1, 4};
        solve(a, b);
        assert(a == vector<int>({2, 2, 1, 1}));
        assert(b == vector<int>({4, 3, 3, 4}));

        a = vector<int>{0, 0, 1, 2};
        b = vector<int>{1, 2, 3, 3};
        solve(a, b);
        assert(a == vector<int>({0, 0, 1, 2}));
        assert(b == vector<int>({1, 2, 3, 3}));
    }
}
