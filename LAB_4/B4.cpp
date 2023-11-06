#define NDEBUG
#include<cassert>


int main()
{
    
    //Dulustan's tests GCD
    {
        assert(my_gcd(12,20)==4);
        assert(my_gcd(35,56)==7);
        assert(my_gcd(100,9900)==100);
        assert(my_gcd(999,2775)==111);   
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif 
    }

    //Придумайте 4 теста.
    //Student's tests GCD
    {
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif 
    }

    //Dulustan's tests simplify
    {
        int a=15, b=20;
        simplify(a,b);
        assert(a==3); assert(b==4);

        a=48, b=120; 
        simplify(a,b);  
        assert(a==2); assert(b==5);

        a=1680, b=4620; 
        simplify(a,b);  
        assert(a==4); assert(b==11);   
        #ifndef NDEBUG
            cout << "SUCCESS 3!" << endl;
        #endif 
    }

    //Придумайте 4 теста.
    //Student's tests simplify
    {
        #ifndef NDEBUG
            cout << "SUCCESS 4!" << endl;
        #endif 
    }
}


