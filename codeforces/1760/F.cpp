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
        long long n,c,d;
        cin>>n>>c>>d;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int left=0, right= d+1, mid;
        while(left<right){
            mid=left+(right-left+1)/2;
            long long coins=0;
            for (int i = 0; i < d; ++i) {
                if(i%mid<n){
                    coins+=arr[i%mid];
                }
            }
            if(coins<c){
                right= mid-1;
            }else{
                left= mid;
            }
        }
        if (left == d+1){
            cout << "Infinity"<<endl;
            continue;
        }else if (left == 0){
            cout << "Impossible"<<endl;
            continue;
        }
        cout << left-1<<endl;


    }

    return 0;
}
