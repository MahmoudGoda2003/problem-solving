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
    int n;
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; ++i) {
       cin>>vec[i];
    }
    for (int i = 0; i <= 100; ++i) {
        int sum=0;
        for (int j = 0; j < n; ++j) {
            if(vec[j]<=i){
                sum++;
            }
        }
        if(n-sum==i){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}