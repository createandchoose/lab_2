#define NDEBUG
#include<cassert>


int main(){

    //Dulustan's tests
    {
        vector<int> v;

        v = {1, 2, 3, 4, 5};
        my_insert(v, 0, 2);
        assert(v == vector<int>({1, 2, 0, 3, 4, 5}));
        my_erase(v, 1);
        assert(v == vector<int>({1, 0, 3, 4, 5}));
        my_insert(v, 3, 3);
        my_insert(v, 5, 0);
        assert(v == vector<int>({1, 0, 3, 3, 4, 5, 0}));
        my_erase(v, 2);
        my_erase(v, 2);
        my_erase(v, 2);
        my_erase(v, 0);
        assert(v == vector<int>({0, 5, 0}));
    }

    //будьте креативны
    //Student's tests
    {
            
    }
}
