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
    int x,y;
    cin>>x>>y;
    int n;cin>>n;
    n--;
    int ans;
    if(n%6==0){
        ans =x;
    }else if(n%6==1){
        ans=y;
    }else if(n%6==2){
        ans = y-x;
    }else if(n%6==3){
        ans = -x;
    }else if(n%6==4){
        ans = -y;
    }else{
        ans = x-y;
    }
    cout << mod(ans , 1000000007) << endl;
}


int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}