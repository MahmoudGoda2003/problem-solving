#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

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

void solve() {
    int k, m, n1, n2;
    cin >> n1 >> n2 >> k >> m;
    vector<int> a(n1);
    for (int i = 0; i < a.size(); ++i) cin >> a[i];
    vector<int> b(n2);
    for (int i = 0; i < b.size(); ++i) cin >> b[i];
    if (a[k - 1] < b[n2 - m]) cout << "YES"<<endl;
    else cout << "NO"<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}