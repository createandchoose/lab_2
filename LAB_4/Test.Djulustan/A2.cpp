#define NDEBUG
#include<cassert>


int main(){

    //Dulustan's tests
    {
        assert(sum_p(1,10) == 55);
        assert(sum_m(2,10) == 385);
        assert(sum_m(3,3) == 36);
        assert(sum_m(4,5) == 979);
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Придумайте 4 теста.
    //Student's tests
    {
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}


