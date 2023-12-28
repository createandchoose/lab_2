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

int main() {
    // Dulustan's tests
    {
        auto result = solve({1, 2, 3, 2, 3, 3, 2, 4, 3});
        assert(result == 3);
        std::cout << "Dulustan's Test 1 passed. Result: " << result << std::endl;

        result = solve({-1, -1, 1, 1, 1, 1, -1, -1, -1});
        assert(result == -1);
        std::cout << "Dulustan's Test 2 passed. Result: " << result << std::endl;

        result = solve({2023, 2022, 2015, 2015, 2023, 2023, 2022});
        assert(result == 2023);
        std::cout << "Dulustan's Test 3 passed. Result: " << result << std::endl;

        result = solve({7, 77, 777, 7777, 777, 7777, 77, 7, 7});
        assert(result == 7);
        std::cout << "Dulustan's Test 4 passed. Result: " << result << std::endl;
    }

    // Student's tests
    {
        auto result = solve({6, 3, 2, 3, 4, 6, 6, 6});
        assert(result == 6);
        std::cout << "Student's Test 1 passed. Result: " << result << std::endl;

        result = solve({10, 9, 8, 0, 0, 0, 4, 5, 6});
        assert(result == 0);
        std::cout << "Student's Test 2 passed. Result: " << result << std::endl;

        result = solve({2});
        assert(result == 2);
        std::cout << "Student's Test 3 passed. Result: " << result << std::endl;
    }

    return 0;
}