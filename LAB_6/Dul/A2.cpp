// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

int power(int n, int p) {
    int res = 1;
    while (p--) {
        res *= n;
    }
    return res;
}

vector<int> solve(vector<int> a){
    vector<int> c(10);
    for (auto it = a.begin(); it != a.end(); it++) {
        c[*it / power(10, floor(log(*it) / log(10)))]++;
    }
    vector<int> ans(c.begin() + 1, c.end());
    return ans;
}

int main(){

    //Dulustan's tests
    {
        assert(solve({1, 1, 4, 1, 5, 8, 6, 3, 5, 1, 6})
        == vector<int>({4, 0, 1, 1, 2, 2, 0, 1, 0}));

        assert(solve({211, 478, 888, 803, 8000, 8111, 89, 2})
        == vector<int>({0, 2, 0, 1, 0, 0, 0, 5, 0}));

        assert(solve({57, 439, 1234, 23456, 369257})
        == vector<int>({1, 1, 1, 1, 1, 0, 0, 0, 0}));

        assert(solve({7, 77, 777, 7777, 77777, 7569, 748421, 30, 70, 70, 71, 712, 7123, 71234, 712345, 7, 7})
        == vector<int>({0, 0, 1, 0, 0, 0, 16, 0, 0}));
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 5, 5, 5}) == vector<int>({1, 1, 1, 1, 5, 1, 1, 1, 1}));
        assert(solve({83274, 1282, 39485934, 123879, 3242, 2}) == vector<int>({2, 1, 2, 0, 0, 0, 0, 1, 0}));
        assert(solve({879456, 12334, 9345, 3459, 3495, 129, 21359, 23, 46, 2109}) == vector<int>({2, 3, 2, 1, 0, 0, 0, 1, 1}));
    }
}
