// #define NDEBUG
#include<cassert>
#include <sstream>
#include <iostream>

using namespace std;

void solve(string &ans){
    stringstream ss;
    ss << ans;
    ans = "";
    string s;
    ss >> s;
    ans = s + " ";
    ss >> s;
    ans += s.substr(0, 1) + ". ";
    ss >> s;
    ans += s.substr(0, 1) + ".";
}

int main(){
    //Dulustan's tests
    {
        string s;

        s = "Perelman Grigori Yakovlevich";
        solve(s);
        assert(s == "Perelman G. Y.");

        s = "Nikolaeva Natalya Vasilevna";
        solve(s);
        assert(s == "Nikolaeva N. V.");

        s = "Vasileva Natalya Vasilevna";
        solve(s);
        assert(s == "Vasileva N. V.");
    }

    //минимум 3 теста
    //Student's tests
    {
        string s;

        s = "Kulichkin Timur Fedorovich";
        solve(s);
        assert(s == "Kulichkin T. F.");

        s = "Mestnikov Ilya Ilyich";
        solve(s);
        assert(s == "Mestnikov I. I.");

        s = "Sleptsov Aysen Alekseevich";
        solve(s);
        assert(s == "Sleptsov A. A.");
    }
}
