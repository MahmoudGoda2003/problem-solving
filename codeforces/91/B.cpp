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
        int n;
        cin>>n;
        pair<int,int> arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i].first;
            arr[i].second=i;
        }
        sort(arr,arr+n);
        int mx=-1;
        int ans[n];
        for (int i = 0; i < n; ++i) {
            ans[arr[i].second]=max(0,mx-arr[i].second);
            mx=max(mx,arr[i].second);
        }
        for (int i = 0; i < n; ++i) {
            cout<<ans[i]-1<<" ";
        }
    return 0;
}
