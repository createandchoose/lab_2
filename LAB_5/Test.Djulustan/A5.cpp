#define NDEBUG
#include<cassert>

vector<int> solve(vector<int> a){
    
}

int main(){

    //Dulustan's tests
    {
        assert(solve({1, 1, 4, 1, 5, 8, 6, 3, 5, 1, 6}) 
        == vector<int>({4, 0, 1, 1, 2, 2, 0, 1, 0}));

        assert(solve({2, 4, 8, 8, 8, 8, 8, 2}) 
        == vector<int>({0, 2, 0, 1, 0, 0, 0, 5, 0}));

        assert(solve({5, 4, 1, 2, 3}) 
        == vector<int>({1, 1, 1, 1, 1, 0, 0, 0, 0}));

        assert(solve({7, 7, 7, 7, 7, 7, 7, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7}) 
        == vector<int>({0, 0, 1, 0, 0, 0, 16, 0, 0}));        
    }

    //минимум 3 теста
    //Student's tests
    {
            
    }
}
