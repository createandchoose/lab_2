// #define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

bool is_prime(int n) {
    if (n == 1) {
        return false;
    }
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}

vector<int> solve(vector<int> a) {
    vector<int> ans;
    for (int i = 0; i < a.size(); i++) {
        if (is_prime(a[i])) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    //Dulustan's tests
    {
        assert(solve({1,2,3,4,5,6,7,8,9}) == vector<int>({1,2,4,6}));
        assert(solve({1,2,4,8,16,32,64}) == vector<int>({1}));
        assert(solve({11,13,21,23,31,33,41,43,51,53,61,63})
        == vector<int>({0,1,3,4,6,7,9,10}));
        assert(solve({183,177,179,147,149,143,107}) == vector<int>({2,4,6}));
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({3, 3, 3, 3, 3, 1, 2, 1, 1, 1}) == vector<int>({0, 1, 2, 3, 4, 6}));
        assert(solve({100, 101, 102, 103}) == vector<int>({1, 3}));
        assert(solve({20, 40, 60, 100, 5000}) == vector<int>());
    }
}
