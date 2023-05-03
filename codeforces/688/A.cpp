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
    int n,d;
    cin>>n>>d;
    int ans =0,sum=0;

    for (int i = 0; i < d; ++i) {
        string  str;
        cin>>str;
        bool flag =false;
        for (int j = 0; j < n; ++j) {
            if(str[j]=='0'){
                flag= true;
            }
        }
        if(flag){
            sum++;
        }else{
            ans= max(ans,sum);
            sum=0;
        }
    }
    ans = max(ans,sum);
    cout<<ans<<endl;

}

int main() {
    int t=1;
    while(t-->0){
        solve();
    }

    return 0;
}