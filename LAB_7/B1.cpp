// #define NDEBUG
#include<cassert>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int solve(string &s) {
    int cur = s[0] - '0';
    for (int i = 1; i < s.size(); i += 2) {
        cur += stoi(s.substr(i, 2));
    }
    return cur;
}

int main(){
    //Dulustan's tests
    {
        string s;

        s = "1+2+3-4+5";
        assert(solve(s) == 7);

        s = "7+7+7-7+7-7-7-7+7";
        assert(solve(s) == 7);

        s = "7-8-9-5-5+1+2-1-2-3+4-9-9+6+7-9";
        assert(solve(s) == -33);
    }

    //минимум 3 теста
    //Student's tests
    {
        string s;

        s = "9+9+9-9-9-9+9-9-9";
        assert(solve(s) == -9);

        s = "1-2+3-4+5";
        assert(solve(s) == 3);

        s = "0-9-9-9-9-9-9-9-9-9-9";
        assert(solve(s) == -90);
    }
}
