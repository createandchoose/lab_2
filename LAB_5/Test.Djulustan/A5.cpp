//#define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

vector<int> solve(vector<int> a){
    vector<int> c(9, 0);
    for (auto& e : a) {
        c[e - 1]++;
    }
    return c;
}

int main(){

    //Dulustan's tests
    {
        assert(solve({1, 1, 4, 1, 5, 8, 6, 3, 5, 1, 6})
        == vector<int>({4, 0, 1, 1, 2, 2, 0, 1, 0}));

        assert(solve({2, 4, 8, 8, 8, 8, 8, 2})
        == vector<int>({0, 2, 0, 1, 0, 0, 0, 5, 0}));

        assert(solve({5, 4, 1, 2, 3})
        == vector<int>({1, 1, 1, 1, 1, 0, 0, 0, 0}));

        assert(solve({7, 7, 7, 7, 7, 7, 7, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7})
        == vector<int>({0, 0, 1, 0, 0, 0, 16, 0, 0}));
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({1, 2, 3, 4, 5, 6, 7, 8, 9}) == vector<int>({1, 1, 1, 1, 1, 1, 1, 1, 1}));
        assert(solve({1, 1, 3, 2, 3, 2, 4}) == vector<int>({2, 2, 2, 1, 0, 0, 0, 0, 0}));
        assert(solve({5, 5, 5, 5, 5, 6, 6, 6, 6, 6}) == vector<int>({0, 0, 0, 0, 5, 5, 0, 0, 0}));
    }
}
