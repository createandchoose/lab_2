#define NDEBUG
#include<cassert>


int main()
{
    
    //Dulustan's tests
    {
        {
            int l,r; intersect(0,3,1,5,l,r);
            assert(l==1 && r==3);
        }
        {
            int l,r; intersect(3,3,0,10,l,r);
            assert(l==3 && r==3);
        }
        {
            int l,r; intersect(-10000,-1,-25,25,l,r);
            assert(l==-25 && r==-1);
        }     
    }

    //Минимум 4 теста
    //Все возможные случаи должны быть протестированы!
    //Student's tests
    {
            
    }    
}

