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
    int n ;
    cin>>n;
    cout<<ceil(pow(n,2)/2)<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i%2==0){
                if(j%2==0){
                    cout<<"C";
                }else{
                    cout<<".";
                };
            }else{
                if(j%2){
                    cout<<"C";
                }else{
                    cout<<".";
                };
            }
        }
        cout<<endl;
    }
    return 0;
}
