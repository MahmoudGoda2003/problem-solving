#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t --> 0){
        int n, xo;
        cin >> n;
        string s, res = "1";
        cin >> s;
 
        if (s[0] == '1')
            xo = 0;
        else
            xo = 1;
 
        for (int i = 1; i < n; i++) {
            if (s[i] == '1' && s[i-1] == '0'){
                xo = 0;
                res += "1";
            } else {
                xo ^= 1;
                if (xo) {
                    if (s[i] == '1')
                        res += '0';
                    else
                        res += '1';
                } else {
                    if (s[i] == '1')
                        res += '1';
                    else
                        res += '0';
                }
            }
        }
 
        cout << res << endl;
    }
    return 0;
}
