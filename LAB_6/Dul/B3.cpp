#define NDEBUG
#include<cassert>


int main(){
    //Dulustan's tests
    {
        vector<long long> x, y;

        x = {2, 7, 5};
        y = {2, 3, -1};
        assert(solve(x, y) == 20);

        x = {-3, 2, 6, 8, 6, -3, 2};
        y = {-2, 3, -2, -1, 4, 4, -1};
        assert(solve(x, y) == 66);

        x = {100'000'000, -500'000'000, 1'000'000, 1'000'000'000};  
        y = {1'000'000, 0, 1'000'000, -1'000'000, -10'000'000};
        assert(solve(x, y) == 16'500'000'000'000'000);
    }

    //1 тест с 4 точками, 1 тест с 7 точками    
    //Student's tests
    {
            
    }
}