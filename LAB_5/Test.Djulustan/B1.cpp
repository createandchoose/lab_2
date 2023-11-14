#define NDEBUG
#include<cassert>


int main(){
    //Dulustan's tests
    {
        assert(solve({1,2,3,4,5,6,7,8,9}) == vector<int>{1,2,3,6});       
        assert(solve({1,2,4,8,16,32,64}) == vector<int>{1});
        assert(solve({11,13,21,23,31,33,41,43,51,53,61,63}) 
        == vector<int>{0,1,3,4,6,7,9,10});
        assert(solve({183,177,179,147,149,143,107}) == vector<int>{2,4,6});    
    }

    //минимум 3 теста
    //Student's tests
    {

    }
}
