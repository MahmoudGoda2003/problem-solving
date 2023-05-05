#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> vec;
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
int mod(int a, int b) {
    int result = a % b;
    if (result < 0) {
        result += b;
    }
    return result;
}
void calc()
{
    for (int i = 2; i <= 1e6+1; i++)
        for (int j = i; j <= 1e6+1; j += i)
            vec[j].push_back(i);
}
void solve() {
    int n, m;
    cin >> n >> m;
    if(vec[n].size() >= 1  ){
        if(vec[n][0] <= m){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    vec = vector<vector<int>>(1e6+1);
    calc();
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}