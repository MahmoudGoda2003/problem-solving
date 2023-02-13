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
    while (t-->0){

        long long a,b;
        cin>>a>>b;
        long long n,m;
        cin>>n>>m;
        long long result =0;
        if(m*a<(m+1)*b){
            result+=(n/(m+1))*m*a;
            n%=(m+1);
        }else{
            cout<<b*n<<endl;
            continue;
        }
        result+=min(a,b)*n;
        cout<<result<<endl;
    }


    return 0;
}
