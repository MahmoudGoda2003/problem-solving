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
    int n,m;
    cin>>n>>m;
    int x,y,temp;
    for (int i = 0; i <=n; ++i) {
        if(i==0){
            cin>>x;
        }else{
            cin>>temp;
        }
    }
    for (int i = 0; i <=m; ++i) {
        if(i==0){
            cin>>y;
        }else{
            cin>>temp;
        }
    }
    if(n>m){
        if(x*y>0){
            cout<<"Infinity"<<endl;
        }else{
            cout<<"-Infinity"<<endl;
        }
    }else if(n<m){
        cout<<"0/1"<<endl;
    }else{

        temp=__gcd(x,y);
        cout<<((x*y)/abs(x*y))*abs(x/temp)<<"/"<<abs(y/temp)<<endl;
    }


    return 0;
}
