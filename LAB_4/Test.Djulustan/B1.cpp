#define NDEBUG
#include<cassert>


int main()
{
    
    //Dulustan's tests
    {
        assert(hamming(1));
        assert(hamming(8));
        assert(hamming(12));
        assert(hamming(24));
        assert(hamming(45));
        assert(hamming(384));
        assert(!hamming(14));
        assert(!hamming(26));
        assert(!hamming(44));
        assert(!hamming(365));     
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif   
    }

    //Придумайте 3 положительных и 3 отрицательных теста.
    //Student's tests
    {
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif     
    }    
}


