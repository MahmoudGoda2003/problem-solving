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

int t ;
cin>>t;
    set<long long > result = SieveOfEratosthenes();
    for (int i = 0; i <t; ++i) {
        long long num;
        cin>>num;

        if (result.find(num) != result.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }



    }




    return 0;
}
