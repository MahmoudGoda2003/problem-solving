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
    int n;
    cin>>n;
    vector<pair<int,int>> vec;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        vec.push_back({x,i});
    }
    sort(vec.begin(),vec.end());
    int g =vec[0].second;
    for (int i = 1; i < n; ++i) {
        g = __gcd(g,abs(vec[i].second-i));
    }
    cout<<g<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}