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
      int n;
      cin>>n;
      int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }sort(arr,arr+n);
        if(arr[0]!=1){
            cout<<"no"<<endl;
            continue;
        }
        int sum =1;
        bool flag =false;
        for (int i = 1; i < n; ++i) {
            if(sum<arr[i]){
                flag =true;
                break;
            }
            sum+=arr[i];
        }
        cout<<(flag?"no":"yes")<<endl;
    }

    return 0;
}