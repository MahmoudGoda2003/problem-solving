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
   int n,t;
   cin>>n>>t;
   vector<int> time;
   vector<int> vec(0,n);
   int mx_val =0;
   int mx_ind=-2;
   for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        time.push_back(x+i);
   }
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for (int i = 0; i < n; ++i) {
        if(time[i]<=t){
            if(mx_val<vec[i]){
                mx_ind= i;
                mx_val=vec[i];
            }
        }
    }
    cout<<mx_ind+1<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}