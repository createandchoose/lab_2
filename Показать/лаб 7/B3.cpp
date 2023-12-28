// #define NDEBUG
#include<cassert>
#include <string>
#include <iostream>

using namespace std;

int solve(string s2) {
    int ans = -1;
    for (int l = 1; l <= s2.size(); ++l) {
        string s = s2.substr(0, l), s1 = s;
        for (int i = 0; i < s1.size() - 1 - i; ++i) swap(s1[i], s1[s1.size() - i - 1]);
        if (s == s1) ans = l;
    }
    return ans;
}

int main(){
    //Dulustan's tests
    {
        assert(solve("ahahah") == 5);
        assert(solve("minimalmimimi") == 5);
        assert(solve("wowwathappened") == 3);
        assert(solve("redderderrik") == 6);
        assert(solve("neveroddoreven") == 14);
    }

    //минимум 3 теста
    //придумайте прикольные строки!
    //Student's tests
    {
        assert(solve("abcdeedcba") == 10);
        assert(solve("aabbccddee") == 2);
        assert(solve("jkllkjasddsa") == 6);
    }
}
