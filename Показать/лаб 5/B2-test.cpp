#include <iostream>
#include <vector>
#include <cassert>

void solve(std::vector<int> &a) {
    if (a.size() < 3) {
        std::cerr << "error" << std::endl;
        return;
    }

    int min1 = 2e9, max1 = -2e9;

    for (auto &n : a) {
        min1 = std::min(min1, n);
        max1 = std::max(max1, n);
    }

    std::vector<int> ans;

    for (auto &n : a) {
        if (std::abs(n - min1) <= 1 || std::abs(n - max1) <= 1) {
            ans.push_back(n);
        }
    }

    a = ans;
}

int main() {
    // Dulustan's tests
    std::cout << "Dulustan's tests:" << std::endl;
    {
        std::vector<int> v;

        v = {1, 3, 5, 4, 2, 6};
        solve(v);
        assert(v == std::vector<int>({1, 5, 2, 6}));
        std::cout << "  Test 1: OK" << std::endl;

        v = {6, 4, 6, 7, 0, 1, 0, 3};
        solve(v);
        assert(v == std::vector<int>({6, 6, 7, 0, 1, 0}));
        std::cout << "  Test 2: OK" << std::endl;

        v = {-1, 0, -5, -9, -2, -10, -6, -9};
        solve(v);
        assert(v == std::vector<int>({-1, 0, -9, -10, -9}));
        std::cout << "  Test 3: OK" << std::endl;

        v = {777, 776, 778, 7, 7, 8};
        solve(v);
        assert(v == std::vector<int>({777, 778, 7, 7, 8}));
        std::cout << "  Test 4: OK" << std::endl;
    }

    // Student's tests
    std::cout << "\nStudent's tests:" << std::endl;
    {
        std::vector<int> v;

        v = {5, 5, 6, 7, 7, 10, 13, 13, 14, 15, 15};
        solve(v);
        assert(v == std::vector<int>({5, 5, 6, 14, 15, 15}));
        std::cout << "  Test 1: OK" << std::endl;

        v = {2, 5, 6, 7, 7, 7};
        solve(v);
        assert(v == std::vector<int>({2, 6, 7, 7, 7}));
        std::cout << "  Test 2: OK" << std::endl;

        v = {7, 1, 6, 2, 8, 4, 4, 7, 7};
        solve(v);
        assert(v == std::vector<int>({7, 1, 2, 8, 7, 7}));
        std::cout << "  Test 3: OK" << std::endl;
    }

    return 0;
}
