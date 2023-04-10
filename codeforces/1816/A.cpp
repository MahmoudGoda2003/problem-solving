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
    int x,y;
    cin>>x>>y;
    if(x==1||y==1){
        cout<<1<<endl;
        cout<<x<<" "<<y<<endl;
    }else{
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
        cout<<x<<" "<<y<<endl;
    }
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}