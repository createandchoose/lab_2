//#define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

int solve(vector<int> a){
    int ans = 0;
    for (int i = 1; i < a.size(); i++) {
        ans += (a[i - 1] < a[i] ? 1 : 0);
    }
    return ans;
}

int main(){

    //Dulustan's tests
    {
        assert(solve({100000}) == 0);
        assert(solve({1,4,7,100}) == 3);
        assert(solve({-100,99,88,55}) == 1);
        assert(solve({1,-2,3,-4,5,-6,7,-7,8,-8,9,-9}) == 5);
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({1, 2, 3, 4, 5}) == 4);
        assert(solve({9, 8, 7, 6, 5}) == 0);
        assert(solve({-8, 8, 0, 4, -4}) == 2);
    }
}
