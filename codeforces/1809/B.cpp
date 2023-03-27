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
    while(t--){
        long long num;
        cin>>num;
        long long ans = sqrt((double)num);
        while(ans*ans>num){
            ans--;
        }
        while(ans*ans<num){
            ans++;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}