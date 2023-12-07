#define NDEBUG
#include<cassert>


int main(){
    //Dulustan's tests
    {
        vector<int> v;

        v = {1, 2, -3, -4, -5, 6};
        solve(v);
        assert(v == vector<int>({3, -12, 6}));

        v = {1, 2, 4, 8, 16};
        solve(v); 
        assert(v == vector<int>({31}));

        v = {-6, 432, 21, 3456, -787, -2023, 40000};
        solve(v); 
        assert(v == vector<int>({-6, 3909, -2810, 40000}));

        v = {-1'000'000, -2'000'000'000, 7'500, 90'000};
        solve(v); 
        assert(v == vector<int>({-2'001'000'000, 97'500}));      
    }   

    //минимум 3 теста
    //Student's tests
    {

    }
}
