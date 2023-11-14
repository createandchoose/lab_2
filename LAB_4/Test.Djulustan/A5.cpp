#define NDEBUG
#include<cassert>


int main()
{
    
    //Dulustan's tests
    {
        assert(perfect(6));
        assert(perfect(28));
        assert(perfect(496));
        assert(perfect(8128));
        assert(!perfect(36));
        assert(!perfect(490));
        assert(!perfect(812));
        assert(!perfect(6458));
        #ifndef NDEBUG
            cout << "SUCCESS!" << endl;
        #endif
    }
    //Тут свои тесты можно не делать, ура!
}



