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
    int a,b,ans;
    cin>>a>>b;
    ans= a+b;
    for (int i = 1; i < 100000; ++i) {
        ans = min(ans,(a+i-1) / i + (b+i-1) / i + (i - 1));
    }
    cout<<ans<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}