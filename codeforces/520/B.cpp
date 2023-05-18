#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<abs(n-m)<<endl;
        return;
    }
    queue<pair<int,int>> q;
    vector<bool> vec(1e4,false);
    q.push({n,0});
    int count =0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x==m){
            cout<<y<<endl;
            break;
        }
        if(!vec[x*2]&&x*2<=1e4){
            q.push({x*2,y+1});
            vec[x*2] = true;
        }
        if(!vec[x-1]&&x-1>0){
            q.push({x-1,y+1});
            vec[x-1] = true;
        }
    }
}

int main() {
    int t=1;
    //cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}