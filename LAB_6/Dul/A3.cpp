#define NDEBUG
#include<cassert>

void solve(vector<int> &a){
        
}

int main(){
    //Dulustan's tests
    {
        vector<int> v;

        v = {4, 76, -1, -7, 15, -33};
        solve(v); 
        assert(v == vector<int>({76, -1, 4, 15, -33, -7}));
        
        v = {1, 3, 5, 4, 2, 6};
        solve(v);
        assert(v == vector<int>({1, 5, 2, 6}));  

        v = {1, 1, 4, 1, 5, 8, 6, 3, 5, 1, 6, 0};
        solve(v) 
        assert(v == vector<int>({1, 4, 1, 5, 8, 1, 3, 5, 6, 6, 0, 1}));
        
        v = {57, 1023, -3213};
        solve(v); 
        assert(v == vector<int>({1023, -3213, 57}));        
    }

    //минимум 3 теста
    //Student's tests
    {
            
    }
}
