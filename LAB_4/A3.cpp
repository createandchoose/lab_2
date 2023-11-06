#define NDEBUG
#include<cassert>
const double EPS = 1e-6;

int main(){
    //здесь делайте ввод данных с консоли, передайте их функции solve()
    //возвращаемый ответ функции выводите на консоль
    
    //Dulustan's tests
    {
        assert(abs(dist(0, 0, 1000, 0) - 1000) < EPS);
        assert(abs(dist(-5, 15, 10, -10) - 29.154759474) < EPS);
        assert(abs(dist(-12.5, 50000, 12.5, 50200) - 201.556443707) < EPS);
        assert(abs(solve(0, 0, 6, 0, 3, 2) - 6) < EPS);
        assert(abs(solve(-2, -2, -2, 4, 9, 1) - 11.401754251) < EPS);
        assert(abs(solve(1, 4, -5, -1, 0, -3) - 7.810249676) < EPS);
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Придумайте по 3 теста для dist и solve.
    //Каждый тест нарисуйте на бумаге и покажите преподу.
    //Student's tests
    {
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}



