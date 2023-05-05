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
    long long n;
    bool flag = false;
    cin >> n;
    vector<long long> vec(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    long long ans = 1;
    for (int i = 0; i < n/2; ++i) {
        if (vec[i] != vec[n-1-i]) {
            flag = true;
            break;
        }
    }
    if (flag) {
        vector<long long> v;
        for (int i = 0; i < n / 2; ++i) {
            if (vec[n-1-i] != vec[i])
                v.push_back(abs(vec[n - 1 - i] - vec[i]));
        }
        ans = v[0];
        for (int i = 1; i < (long long)v.size(); ++i) {
            ans = __gcd(ans, v[i]);
        }
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
}


int main() {
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }

    return 0;
}