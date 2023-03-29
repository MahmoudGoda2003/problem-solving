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
void solve() {
    char g[8][8];
    vector<int> r;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'R') {r.push_back(i);}
        }
    }
    for (int i : r) {
        bool ok = true;
        for (int j = 0; j < 8; j++) {
            if (g[i][j] != 'R') {ok = false; break;}
        }
        if (ok) {cout << "R\n"; return;}
    }
    cout << "B\n";
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}