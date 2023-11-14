#include<iostream>
// #define NDEBUG
using namespace std;
#include<cassert>


int power(int x, int p){
    int res=1;
    for(int i=0; i<p; ++i)
        res *= x;
    return res;
}

int main(){
    // int x,p; cin >> x >> p;
    // cout << power(x, p) << endl;
    //Dulustan's tests
    {
        assert(power(1,100) == 1);
        assert(power(2,7) == 128);
        assert(power(2,10) == 1024);  
        assert(power(6,5) == 7776);
        // assert(power(7,13) == 96889010407);
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Придумайте 4 теста.
    //Student's tests
    {
        assert(power(2,11) == 2048);
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}


