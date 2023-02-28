#include <iostream>
#include<bits/stdc++.h>
using namespace std;


set <long long> SieveOfEratosthenes()
{
    const int n = 1e6;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    set<long long> res;
    for (int i = 2; i < 1e6+1; i++)
    {
        if (prime[i])
            res.insert((long long)i * i);
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t-->0){
        string str1, str2;
        cin >> str1 >> str2;
        if(str1.back() == str2.back()){
            cout << "YES" << endl;
            cout << "*" << str2.back() << endl;
            continue;
        }else if(str2[0] == str1[0]){
            cout << "YES" << endl;
            cout << str1[0] << "*" << endl;
            continue;
        }
        bool flag =true;
        for (int i = 0; i < str1.size()-1&&flag; i++)
        {
            for (int j = 0; j < str2.size()-1&&flag; j++)
            {
                if(str1.substr(i, 2) == str2.substr(j,2))
                {
                    cout << "YES" << endl;
                    cout << "*" << str1.substr(i, 2) << "*" << endl;
                    flag =false;
                }
            }

        }
        if(flag) cout << "NO" << endl;
    }

    return 0;
}