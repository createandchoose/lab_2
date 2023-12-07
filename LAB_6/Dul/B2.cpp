#define NDEBUG
#include<cassert>


int main(){
    //Dulustan's tests
    {
        vector<int> v;
        
        v = {1, 3, 5, 4, 2, 6};
        solve(v);
        assert(v == vector<int>{1, 5, 2, 6});    
        
        v = {6, 4, 6, 7, 0, 1, 0, 3};
        solve(v);
        assert(v == vector<int>{6, 6, 7, 0, 1, 0});    

        v = {-1, 0, -5, -9, -2, -10, -6, -9};
        solve(v);
        assert(v == vector<int>{-1, 0, -9, -10, -9});  

        v = {777, 776, 778, 7, 7, 8};
        solve(v);
        assert(v == vector<int>{777, 778, 7, 7, 8});  
    }

    //минимум 3 теста
    //Student's tests
    {
        vector<int> v;
    }
}