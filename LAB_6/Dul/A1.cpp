// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> a){
    int c = 2, p1, p2;
    vector<int> ans;
    for (int n : a) {
        if (c) {
            c--;
            p1 = p2;
            p2 = n;
            continue;
        }
        if (p1 + p2 == n) {
            ans.push_back(n);
        }
        p1 = p2;
        p2 = n;
    }
    return ans;
}

int main(){

    //Dulustan's tests
    {
        assert(solve({1,2,-3,-1,-4,8,4}) == vector<int>({-1,-4,4}));
        assert(solve({1,4,7,100}) == vector<int>({}));
        assert(solve({-100,99,-1,55,54,99,1,100}) == vector<int>({-1,54,100}));
        assert(solve({1,1,2,3,5,8,13,21,34,55}) == vector<int>({2,3,5,8,13,21,34,55}));
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({1, 2, 3, 4, 7, 11}) == vector<int>({3, 7, 11}));
        assert(solve({-1, 2, 1, 3, -5, -2}) == vector<int>({1, 3, -2}));
        assert(solve({5, 5, 5, 10, -10, 0, -10, 0, -10}) == vector<int>({10, 0, -10, -10}));
    }
}
