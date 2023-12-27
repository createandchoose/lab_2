//#define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

vector<int> solve(vector<int> a){
    for (int i = 1; i < a.size(); i += 2) {
        swap(a[i - 1], a[i]);
    }
    return a;
}

int main(){
    //Dulustan's tests
    {
        assert(solve({-1, 5, 0, 100}) == vector<int>({5, -1, 100, 0}));

        assert(solve({3, -1, 5, -7, 10, 36, -61, 88})
        == vector<int>({-1, 3, -7, 5, 36, 10, 88, -61}));

        assert(solve({3, 10, 22, -10, 76, -61, -123, -5, 7})
        == vector<int>({10, 3, -10, 22, -61, 76, -5, -123, 7}));

        assert(solve({-2022, 1039, -3039, -2023, -2024, 777, 361})
        == vector<int>({1039, -2022, -2023, -3039, 777, -2024, 361}));
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({1, 2, 3, 4, 5}) == vector<int>({2, 1, 4, 3, 5}));
        assert(solve({0, 0, -3, 0}) == vector<int>({0, 0, 0, -3}));
        assert(solve({5, 3, 1}) == vector<int>({3, 5, 1}));
    }
}
