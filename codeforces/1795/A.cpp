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
        while(t-->0){
            int n,m;
            cin>>n>>m;
            string x,y;
            cin>>x>>y;
            int count =0;
            for (int i = 0; i < n-1; ++i) {
                if(x[i]==x[i+1]){
                    count++;
                }
            }
            for (int i = 0; i < m-1; ++i) {
                if(y[i]==y[i+1]){
                    count++;
                }
            }
            if(count>1||count!=0&&x[n-1]==y[m-1]){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }



        }
    return 0;
}
