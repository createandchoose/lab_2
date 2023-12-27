// #define NDEBUG
#include <cassert>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<int> solve(string s){
    vector<int> co(3);
    for (auto &c : s) {
        if (islower(c)) ++co[1];
        else if (isupper(c)) ++co[0];
        else if (isdigit(c)) ++co[2];
    }
    return co;
}

int main(){
    //Dulustan's tests
    {
        assert(solve("Mr. 2 is Bon-chan") == vector<int>({2, 9, 1}));
        assert(solve("Wanted Dead or Alive 200000$") == vector<int>({3, 14, 6}));
        assert(solve("One Piece 1997") == vector<int>({2, 6, 4}));
        assert(solve("10! is 3628800") == vector<int>({0, 2, 9}));
    }

    //минимум 3 теста
    //придумайте прикольные строки!
    //Student's tests
    {
        assert(solve("tImUrLaNd228") == vector<int>({4, 5, 3}));
        assert(solve("12 qwE RtYUIOpas 12") == vector<int>({6, 6, 4}));
        assert(solve("a a a a a B B B B B 3 3 3 3 3") == vector<int>({5, 5, 5}));
    }
}
