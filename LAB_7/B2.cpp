// #define NDEBUG
#include<cassert>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

void solve(string &s) {
    stringstream ss, ss1;
    ss << s;
    ss1 << s;
    int ma = -1;
    string s1;
    while (ss >> s1) {
        ma = max(ma, int(s1.size()));
    }
    s = "";
    while (ss1 >> s1) {
        if (s1.size() == ma) {
            for (auto &c : s1) c = toupper(c);
        }
        s += s1 + " ";
    }
    s.pop_back();
}

int main(){
    //Dulustan's tests
    {
        string s;

        s = "A jack of all trades is a master of none";
        solve(s);
        assert(s == "A jack of all TRADES is a MASTER of none");

        s = "An idle brain is devils workshop";
        solve(s);
        assert(s == "An idle brain is devils WORKSHOP");

        s = "Once bitten twice shy";
        solve(s);
        assert(s == "Once BITTEN twice shy");

        s = "Gomu gomu no hito";
        solve(s);
        assert(s == "GOMU GOMU no HITO");
    }

    //минимум 3 теста
    //придумайте прикольные строки!
    //Student's tests
    {
        string s;

        s = "a b cc dd eee fff";
        solve(s);
        assert(s == "a b cc dd EEE FFF");

        s = "timur is the worst programmer ever programmer";
        solve(s);
        assert(s == "timur is the worst PROGRAMMER ever PROGRAMMER");

        s = "a b c d e f gg hh ii jj kk ll";
        solve(s);
        assert(s == "a b c d e f GG HH II JJ KK LL");
    }
}
