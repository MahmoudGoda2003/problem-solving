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
int mod(int a, int b) {
    int result = a % b;
    if (result < 0) {
        result += b;
    }
    return result;
}
void solve() {
    int k;
    cin>>k;
    if (k == 2)
    {
        long long x,y;
        cin>>x>>y;
        cout << x * y << endl;
        return;
    }
    vector<long long> p, n;
    for (int i = 0; i < k; i++)
    {   int x;
        cin>>x;
        if (x >= 0) p.push_back(x);
        else n.push_back(x);
    }
    sort(p.rbegin(), p.rend());
    sort(n.begin(), n.end());

    long long ans = 0;
    if (p.size() >= 2)
        ans = max(ans, p[0] * p[1]);
    if (n.size() >= 2)
        ans = max(ans, n[0] * n[1]);
    cout << ans << endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}