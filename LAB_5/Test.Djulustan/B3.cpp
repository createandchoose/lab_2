#define NDEBUG
#include<cassert>
const double EPS = 1e-6;

//!здесь все числа вещественные!
//при сравнении двух вещ. чисел на равенство мы сравниваем их разницу 
//с маленькой константой EPS 

int main(){
    //Dulustan's tests
    {
        vector<double> x, y;

        x = vector<double>{5,4,3,2,1};
        y = vector<double>{5,4,3,2,1};
        assert(abs(solve(x, y) - 1.41421356237) < EPS);    
    
        x = vector<double>{0, -50};
        y = vector<double>{50, 0};
        assert(abs(solve(x, y) - 70.7106781187) < EPS);   

        x = vector<double>{2, 11.11, 10.5, 5, 3, 0};
        y = vector<double>{6, -3.14, 0.92, 6, 1, 0};
        assert(abs(solve(x, y) - 3.0) < EPS); 
    }

    //1 тест с 3 точками, 1 тест с 5 точками, 1 тест с 7 точками    
    //Student's tests
    {
            
    }
}
