// #define NDEBUG
#include<cassert>
#include <bits/stdc++.h>

using namespace std;

void my_insert(vector<int> &v, int x, int k) {
    v.push_back(x);
    for (int i = v.size() - 2; k <= i; i--) {
        swap(v[i], v[i + 1]);
    }
}

void my_erase(vector<int> &v, int k) {
    for (int i = k + 1; i < v.size(); i++) {
        swap(v[i - 1], v[i]);
    }
    v.pop_back();
}

int main(){

    //Dulustan's tests
    {
        vector<int> v;

        v = {1, 2, 3, 4, 5};
        my_insert(v, 0, 2);
        assert(v == vector<int>({1, 2, 0, 3, 4, 5}));
        my_erase(v, 1);
        assert(v == vector<int>({1, 0, 3, 4, 5}));
        my_insert(v, 3, 3);
        my_insert(v, 5, 0);
        assert(v == vector<int>({5, 1, 0, 3, 3, 4, 5}));
        my_erase(v, 2);
        my_erase(v, 2);
        my_erase(v, 2);
        my_erase(v, 0);
        assert(v == vector<int>({1, 4, 5}));
    }

    //будьте креативны
    //Student's tests
    {
        vector<int> v;

        v = {5, 4, 3, 2, 1};
        my_insert(v, 0, 0);
        assert(v == vector<int>({0, 5, 4, 3, 2, 1}));
        my_erase(v, 2);
        my_erase(v, 3);
        assert(v == vector<int>({0, 5, 3, 1}));
        my_insert(v, 6, 2);
        assert(v == vector<int>({0, 5, 6, 3, 1}));
        my_erase(v, 4);
        my_erase(v, 0);
        assert(v == vector<int>({5, 6, 3}));
    }
}
