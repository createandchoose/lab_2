// #define NDEBUG
#include<cassert>
#include <sstream>
#include <cctype>

using namespace std;

int solve(string s){
    stringstream ss;
    ss << s;
    int ans = 0;
    while (ss >> s) {
        ans += isupper(s[0]);
    }
    return ans;
}

int main(){
    //Dulustan's tests
    {
        assert(solve("People, who can’t Throw something important Away, can never hope to Change anything")
        == 4);
        assert(solve("To be OR not to be?") == 2);
        assert(solve("GREAT ENEMY FELLED") == 3);
    }

    //минимум 3 теста
    //придумайте прикольные строки!
    //Student's tests
    {
        assert(solve("First second; Third, Fourth Fifth sixth") == 4);
        assert(solve("a b c D E F G h i") == 4);
        assert(solve("             G             asdjasdij GHGH GHGH GH") == 4);
    }
}
