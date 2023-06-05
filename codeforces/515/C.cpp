#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    string res;
    cin >> s;

    map<char, string> mapp;
    mapp['0'] = "";
    mapp['1'] = "";
    mapp['2'] = "2";
    mapp['3'] = "3";
    mapp['4'] = "322";
    mapp['5'] = "5";
    mapp['6'] = "53";
    mapp['7'] = "7";
    mapp['8'] = "7222";
    mapp['9'] = "7332";

    for (int i = 0; i < n; i++) {
        res += mapp[s[i]];
    }

    sort(res.begin(), res.end(), greater<char>());
    cout << res << endl;

    return 0;
}