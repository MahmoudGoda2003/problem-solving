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
        int arr[n];
        long long ans =0;
        long long ones=0;
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
            if(arr[i]==1){
                ones++;
            }else{
                ans+=ones;
            }
        }
        for (int i = n-1; i >=0; i--) {
            if(arr[i]==1){
                arr[i]=0;
                long long x=0;
                ones=0;
                for (int i = 0; i < n; ++i) {
                    if(arr[i]==1){
                        ones++;
                    }else{
                        x+=ones;
                    }
                }
                arr[i]=1;
                ans=max(ans,x);
                break;
            }
        }

        for (int i = 0; i <n; i++) {
            if(arr[i]==0){
                arr[i]=1;
                long long x=0;
                ones=0;
                for (int i = 0; i < n; ++i) {
                    if(arr[i]==1){
                        ones++;
                    }else{
                        x+=ones;
                    }
                }
                arr[i]=0;
                ans=max(ans,x);
                break;
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}
