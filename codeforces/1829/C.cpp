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
int mod(int a, int b) {
    int result = a % b;
    if (result < 0) {
        result += b;
    }
    return result;
}
void solve() {
   int n;
   cin>>n;
   int t1=1e9,t2=1e9,x=0,y=0,mn=1e9;
    for (int i = 0; i < n; ++i) {
        int t;
        string z;
        cin>>t>>z;
        if(z=="01"){
            if(t<t1){
                x=1;
                t1=t;
            }
        }else if (z=="10"){
            if(t<t2){
                y=2;
                t2=t;
            }
        }else if(z=="11"){
            if(t<mn){
                mn=t;
            }
        }
    }
    if(mn!=1e9){
        if((x+y)!=3){
            cout<<mn<<endl;
            return;
        }
        cout<<min(mn,t1+t2)<<endl;
        return;
    }
    if((x+y)==3){
        cout<<t1+t2<<endl;
    }else{
        cout<<-1<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}