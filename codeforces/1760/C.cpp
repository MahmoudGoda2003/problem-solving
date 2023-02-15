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
    int t ;cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int x=0,y=0;int arr[n];
        cin>>arr[0];
        x=arr[0];
        for (int i = 1; i < n; ++i) {
            cin>>arr[i];
            if(arr[i]>=x){
                y=x;
                x=arr[i];
            }else if(arr[i]>y){
                y=arr[i];
            }
        }

        for (int i = 0; i < n; ++i) {
            if(arr[i]!=x){
                cout<<arr[i]-x<<" ";
            }else{
                cout<<arr[i]-y<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
