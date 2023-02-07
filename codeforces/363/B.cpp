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

    int n,k ;
    cin>>n>>k;

    int mn = 1e9,x=0;
    int vec[n];
    int sum =0;
    for (int i = 0; i <n; ++i) {
       cin>>vec[i];
       if(i<k){
           sum+=vec[i];
       }
    }
    for (int i = 0; i < n-k+1; ++i) {
        if(mn>sum){
            x=i;
            mn=sum;
        }
        sum-=vec[i];
        sum+=vec[i+k];
    }

    cout<<x+1;


    return 0;
}
