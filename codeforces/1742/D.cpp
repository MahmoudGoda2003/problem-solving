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
vector<int> pairs[1001];
void solve() {
    int n; cin >> n;
    vector<int> id[1001];
    for(int i = 1; i <= n; ++i) {
        int x; cin >> x;
        id[x].push_back(i);
    }
    int ans = -1;
    for(int i = 1; i <= 1000; ++i) {
        for(int j: pairs[i]) {
            if(!id[i].empty() && !id[j].empty()) {
                ans = max(ans, id[i].back() + id[j].back());
            }
        }
    }
    cout << ans << "\n";
}



int main() {
    for(int i = 1; i <= 1000; ++i) {
        for(int j = 1; j <= 1000; ++j) {
            if(__gcd(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}