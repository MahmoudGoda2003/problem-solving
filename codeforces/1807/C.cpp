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
        cin>>n;
        string str;
        cin>>str;
        bool flag = false;
        vector<int> vec(26,10);
        for (int i = 0; i < n; ++i) {
            if(vec[str[i]-'a']==10){
                vec[str[i]-'a']= i%2;
            }else{
                if(vec[str[i]-'a'] != i%2){
                    flag= true;
                    break;
                }
            }
        }if(flag){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }

    }

    return 0;
}