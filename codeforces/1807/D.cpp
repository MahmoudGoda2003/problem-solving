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
        int n,q;
        cin>>n>>q;
        int arr[n];
        cin>>arr[0];
        for (int i = 1; i < n; ++i) {
            cin>>arr[i];
            arr[i]+=arr[i-1];
        }
        for (int i = 0; i < q; ++i) {
            long long sum= arr[n-1],dif=0;
            int l,r,k;
            cin>>l>>r>>k;
            if(l==1){
                dif= k*(r-l+1) -arr[r-1];
            }else{
                dif= k*(r-l+1) -(arr[r-1]-arr[l-2]);
            }
            if((sum+dif)%2==0){
                cout<<"no"<<endl;
            }else{
                cout<<"yes"<<endl;
            }
        }

    }

    return 0;
}