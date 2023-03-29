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
void solve(){
    map<int,int> mp;
    int n;
    cin>>n;
    bool flag =false;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]>1){
            flag =true;
        }
    }
    cout<<(flag?"no":"yes")<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}