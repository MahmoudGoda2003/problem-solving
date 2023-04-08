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
    int n,k;
    cin>>n>>k;
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>g[i][j];
        }
    }
    int count =0;
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < n; ++j) {
            if (g[i][j]!=g[n-i-1][n-j-1]){
                count++;
            }
        }
    }
    if (n%2){
        for (int i = 0; i < n/2; ++i) {
            if (g[n/2][i]!=g[n/2][n-i-1])
                count++;
        }
    }
    k -= count;
    if (k>=0&&(k%2==0||n%2==1)) {
        cout<<"yes"<<endl;
    } else{
        cout<<"no"<<endl;
    }

}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}