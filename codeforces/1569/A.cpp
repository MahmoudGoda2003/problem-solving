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
bool solve(string str,int n){
    for (int i = 0; i < n; ++i) {
        int x=0,y=0;
        for (int j = i; j < n; ++j) {
            if(str[j]=='a'){
                x++;
            }else{
                y++;
            }
            if(x==y){
                cout<<i+1<<" "<<j+1<<endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        string str;
        cin>>str;
        if(!solve(str,n)){
            cout<<-1<<" "<<-1<<endl;
        }

        }




    return 0;
}
