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
        string ans="";
        string input;int n;
        cin>>n;
        cin>>input;

        for (int i = 0; i < n; ++i) {
            ans+=to_string(9-(input[i]-'0'));
        }
        if(ans[0]=='0'){
            int carry =0,sum=0;
            for (int i = n-1; i >=0; --i) {
                 sum = carry + (ans[i]-'0') +((i==n-1)?2:1) ;
                 carry=0;
                 if(sum>9){
                     carry = sum/10;
                     sum%=10;
                 }
                 ans[i]=(char)sum+'0';
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}