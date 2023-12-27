//#define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

vector<int> solve(vector<int> a){
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] * a[i] == 0) {
            if (0 < a[i - 1] || 0 < a[i]) {
                return {a[i - 1], a[i]};
            }
        }
        if (0 < a[i - 1] * a[i]) {
            return {a[i - 1], a[i]};
        }
    }
    return {};
}

int main(){
    //Dulustan's tests
    {
        assert(solve({-1, 5, 0, 100}) == vector<int>({5, 0}));
        assert(solve({3, -1, 5, -7, 10, 36, -61, 88}) == vector<int>({10, 36}));
        assert(solve({3, 10, 22, -10, 76, -61, -123, -5, 7}) == vector<int>({3, 10}));
        assert(solve({-2022, 1039, -3039, -2023, -2024, 777, 361}) == vector<int>({-3039, -2023}));
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({1, -2, 3, -4}) == vector<int>());
        assert(solve({-1, 8, 0, -6}) == vector<int>({8, 0}));
        assert(solve({6, -7, 8, 9, -10}) == vector<int>({8, 9}));
    }
}
