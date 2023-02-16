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
        long long n,k;
        cin>>n>>k;
        if(n>(((k*(k+1))/2)-(k-1))){
            cout<<-1<<endl;return 0;
        }
        int left =0, right =k,mid;

    while(left<right){
        mid =(left+right)/2;
        long long ans = ((k*(k+1))/2)-(mid-1)-(((k-mid)*(k-mid+1))/2);
        if(ans<n){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    cout<<left<<endl;
    return 0;
}
