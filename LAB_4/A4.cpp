#define NDEBUG
#include<cassert>


int main()
{

    //Dulustan's tests
    {
        {
            int a=138, b=2647, c=36971;
            sort_by_last(a,b,c);
            assert(a==36971 && b==2647 && c==138);
        }
        {
            int a=456, b=123, c=789;
            sort_by_last(a,b,c);
            assert(a==123 && b==456 && c==789);
        }
        
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Минимум 4 теста 
    //Все возможные перестановки a,b,c должны быть протестированы!
    //Student's tests
    {
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}



