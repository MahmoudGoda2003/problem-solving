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

    string y,x="codeforces";int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {


        cin >> y;
        if (x.find(y)!= string::npos) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
