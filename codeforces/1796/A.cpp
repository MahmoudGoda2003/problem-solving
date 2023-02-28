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
    string ref ="FBFFBFFB";
    while(t-->0){
        int n;
        cin>>n;
        string str;cin>>str;
        bool flag = false;
        for (int i = 0; i < 8; ++i) {
            if(str[0]==ref[i]){
                flag = true;
                for (int j = 0; j < n; ++j) {
                    if(str[j]!=ref[(i+j)%8]){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }





    }

    return 0;
}