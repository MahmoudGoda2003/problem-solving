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
int dp(int n, int m){
    if(m==n){
        cout<<"yes"<<endl;
        return 1;
    }if(n%3==0){
        int x = dp(n/3,m) ;
        if(x==1){
            return 1;
        }
        return dp((2*n)/3,m);
    }
}
void solve() {
    int n;
    cin>>n;
    while(true){
        if(n%11==0){
            cout<<"yes"<<endl;
            return;
        }
        n-=111;
        if(n<0){
            break;
        }
    }
    cout<<"no"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}