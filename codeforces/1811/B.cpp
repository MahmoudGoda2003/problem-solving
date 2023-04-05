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
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    n /= 2;
    int l1 = max({x1-n, n+1-x1, y1-n, n+1-y1});
    int l2 = max({x2-n, n+1-x2, y2-n, n+1-y2});
    cout << abs(l1-l2) << endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}