#define NDEBUG
#include<cassert>

void solve(vector<int> &a, int l, int r){    

}

int main(){

    //Dulustan's tests
    {
        vector<int> v;

        v = {1, 2, 3, 4, 5};
        solve(v, 1, 3);
        assert(v == vector<int>({2, 3, 4, 1, 5}));

        v = {2, 4, 8, 8, 8, 8, 8, 2};
        solve(v, 4, 7); 
        assert(v == vector<int>({8, 8, 8, 2, 2, 4, 8, 8}));

        v = {-6, 432, 21, 3456, -787, 2020, 40000};
        solve(v, 1, 1); 
        assert(v == vector<int>({432, -6, 21, 3456, -787, 2020, 40000}));

        v = {1'000'000, 2'000'000'000, 7'500, -90'000};
        solve(v, 1, 4); 
        assert(v == vector<int>({1'000'000, 2'000'000'000, 7'500, -90'000}));      
    }

    //минимум 3 теста
    //Student's tests
    {
            
    }
}
