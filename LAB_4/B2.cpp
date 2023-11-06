#define NDEBUG
#include<cassert>


int main()
{
    
    //Dulustan's tests
    {
        assert(Syracuse(1)==0);
        assert(Syracuse(2)==1); 
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif    
    }

    //Тут я поленился вычислять тесты, оставляю это дело за вами.
    //Придумайте 8 тестов.
    //Student's tests
    {
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif    
    }
}


