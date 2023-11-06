#define NDEBUG
#include<cassert>


int main()
{
    
    //Dulustan's tests
    {
        {
            long long x=8; digit_root(x);
            assert(x==8);
        }
        {
            long long x=25; digit_root(x);
            assert(x==7);
        }
        {
            long long x=99; digit_root(x);
            assert(x==9);
        }
        {
            long long x=987; digit_root(x);
            assert(x==6);
        }
        {
            long long x=777'777'777'777; digit_root(x);
            assert(x==3);
        }
    }

    //Придумайте 5 тестов.
    //Student's tests
    {
            
    }    
}

