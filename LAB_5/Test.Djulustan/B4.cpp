// #define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

int solve(vector<int> a) {
    for (int i = 0; i < a.size() - 1; i++) {
        int min1 = 2e9, index;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] < min1) {
                min1 = a[j];
                index = j;
            }
        }
        if (min1 < a[i]) {
            swap(a[i], a[index]);
        }
    }
    a.push_back(-100000);
    int prev = 2e9, cur = 0, ans = -1, ans1;
    for (auto& e : a) {
        if (prev != e) {
            if (ans < cur) {
                ans = cur;
                ans1 = prev;
            }
            prev = e;
            cur = 1;
        } else {
            cur++;
        }
    }
    return ans1;
}

int main(){
    //Dulustan's tests
    {
        assert(solve({1, 2, 3, 2, 3, 3, 2, 4, 3}) == 3);
        assert(solve({-1, -1, 1, 1, 1, 1, -1, -1, -1}) == -1);
        assert(solve({2023, 2022, 2015, 2015, 2023, 2023, 2022}) == 2023);
        assert(solve({7, 77, 777, 7777, 777, 7777, 77, 7, 7}) == 7);
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({6, 3, 2, 3, 4, 6, 6, 6, 6}) == 6);
        assert(solve({10, 9, 8, 0, 0, 0, 4, 5, 6}) == 0);
        assert(solve({2}) == 2);
    }
}
