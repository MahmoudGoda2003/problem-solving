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

int main() {
    int t;
    cin>>t;
    while (t-->0){
      map <char,int> mp;
      int mx = 0;
        for (int i = 0; i < 4; ++i) {
            char x;
            cin>>x;
            mp[x]++;
            mx = max(mp[x],mx);
        }
        if(mx==3){
            cout<<6<<endl;
        }else if(mx==4){
            cout<<-1<<endl;
        }else{
            cout<<4<<endl;
        }
    }

    return 0;
}