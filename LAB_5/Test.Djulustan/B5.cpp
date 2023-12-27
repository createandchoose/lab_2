// #define NDEBUG
#include <bits/stdc++.h>
#include<cassert>

using namespace std;

vector<int> solve(vector<int> a1) {
    vector<vector<int>> a;
    for (int i = 0; i < a1.size(); i++) {
        a.push_back({a1[i], i});
    }
    for (int i = 0; i < a.size() - 1; i++) {
        int min1 = 2e9, index;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j][0] < min1) {
                min1 = a[j][0];
                index = j;
            }
        }
        if (min1 < a[i][0]) {
            swap(a[i], a[index]);
        }
    }
    a.push_back({-int(2e9), -1});
    int amt = 0;
    vector<int> prev{int(2e9), -1};
    vector<vector<int>> ans;
    for (auto& e : a) {
        if (prev[0] != e[0]) {
            if (amt == 1) {
                ans.push_back(prev);
            }
            prev = e;
            amt = 1;
        } else {
            amt++;
        }
    }
    if (ans.size() == 0) {
        return vector<int>();
    }
    vector<int> real_ans;
    for (int i = 0; i < ans.size() - 1; i++) {
        int min1 = 2e9, index;
        for (int j = i + 1; j < ans.size(); j++) {
            if (ans[j][1] < min1) {
                min1 = ans[j][1];
                index = j;
            }
        }
        if (min1 < ans[i][1]) {
            swap(ans[i], ans[index]);
        }
        real_ans.push_back(ans[i][0]);
    }
    real_ans.push_back(ans[ans.size() - 1][0]);
    return real_ans;
}

int main(){
    //Dulustan's tests
    {
        assert(solve({4, 8, 16, 4, 2, -8, -8, 4}) == vector<int>({8, 16, 2}));
        assert(solve({1, 2, 3, 2, 3, 3, 2, 4, 3}) == vector<int>({1, 4}));
        assert(solve({7, 8, 9, 1007, 1008, 1009, 9, 9, -2}) == vector<int>({7, 8, 1007, 1008, 1009, -2}));
        assert(solve({1, 4, 9, 16, 1, 1, 9, 16, 16, 9}) == vector<int>({4}));
    }

    //минимум 3 теста
    //Student's tests
    {
        assert(solve({7, 2, 2, 5, 1, 4, 4, -2, -3, -3, -3}) == vector<int>({7, 5, 1, -2}));
        assert(solve({7, 7, 7, 6, 6, 6, 4, 3, 2, 2, 3, 4, 1, 6, 9, 9, 0}) == vector<int>({1, 0}));
        assert(solve({1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}) == vector<int>());
    }
}
