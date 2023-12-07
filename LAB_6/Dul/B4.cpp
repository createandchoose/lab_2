#define NDEBUG
#include<cassert>
const double EPS = 1e-6;

//!здесь все числа вещественные!
//при сравнении двух вещ. чисел на равенство мы сравниваем их разницу 
//с маленькой константой EPS 


int main(){
    //Dulustan's tests
    {
        vector<long long> x, y;

        x = vector<long long>{0, 1, 7, -1, 8};
        y = vector<long long>{0, -1, 3, -1, 0};
        assert(abs(solve(x, y) - 1.0) < EPS);    
    
        x = vector<long long>{-10000, -9000, -8000, -7000, 0};
        y = vector<long long>{-100, -100, -100, -100, 100};
        assert(abs(solve(x, y) - 0.0) < EPS);   

        x = vector<long long>{0, 3, 6, 3, 0, -3};
        y = vector<long long>{0, 0, 2, 4, 4, 2};
        assert(abs(solve(x, y) - 3.0) < EPS); 
    }

    //1 тест с 3 точками, 1 тест с 5 точками, 1 тест с 7 точками    
    //Student's tests
    {
            
    }
}