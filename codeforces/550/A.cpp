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
   string s ;
   cin>>s;
   int ABfound = 0;
    int BAfound = 0;
    int a=0,b=0;
    for (int i = 0; i < s.length()-1; ++i) {

        if (s.substr(i, 2) == "AB") {
            if(abs(i-b)!=1||!ABfound){
                a=i;
            }
            ABfound++;
        }else if(s.substr(i, 2) == "BA"){
            if(abs(i-a)!=1||!BAfound){
                b=i;
            }
            BAfound++;
        }

    }
    if(ABfound && BAfound && abs(a-b)!=1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
