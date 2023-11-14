#define NDEBUG
#include<cassert>


int main(){
    //Dulustan's tests
    {
        assert(solve({4, 8, 16, 4, 2, -8, -8, 4}) == vector<int>{8, 16, 2});
        assert(solve({1, 2, 3, 2, 3, 3, 2, 4, 3}) == vector<int>{1, 4});
        assert(solve({7, 8, 9, 1007, 1008, 1009, 9, 9, -2}) == vector<int>{7, 8, 1007, 1008, 1009, -2});
        assert(solve({1, 4, 9, 16, 1, 1, 9, 16, 16, 9}) == vector<int>{4});
    }

    //минимум 3 теста
    //Student's tests
    {
            
    }
}
