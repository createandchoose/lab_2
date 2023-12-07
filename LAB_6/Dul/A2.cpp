#define NDEBUG
#include<cassert>

vector<int> solve(vector<int> a){
    
}

int main(){

    //Dulustan's tests
    {
        assert(solve({1, 1, 4, 1, 5, 8, 6, 3, 5, 1, 6}) 
        == vector<int>({4, 0, 1, 1, 2, 2, 0, 1, 0}));

        assert(solve({211, 478, 888, 803, 8000, 8111, 89, 2}) 
        == vector<int>({0, 2, 0, 1, 0, 0, 0, 5, 0}));

        assert(solve({57, 439, 1234, 23456, 369257}) 
        == vector<int>({1, 1, 1, 1, 1, 0, 0, 0, 0}));

        assert(solve({7, 77, 777, 7777, 77777, 7569, 748421, 30, 70, 70, 71, 712, 7123, 71234, 712345, 7, 7}) 
        == vector<int>({0, 0, 1, 0, 0, 0, 16, 0, 0}));        
    }

    //минимум 3 теста
    //Student's tests
    {
            
    }
}