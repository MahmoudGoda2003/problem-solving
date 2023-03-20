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
        int even=0,odd=0;
        cin>>n;
        for (int i = 0; i <n; ++i) {
            int x; cin>>x;
            if(x%2==0){
                even+=x;
            }else{
                odd+=x;
            }
        }
        if (even>odd){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }

    }

    return 0;
}