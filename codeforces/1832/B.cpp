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
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    long long sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
        sum+=vec[i];
    }
    sort(vec.begin(),vec.end());
    int min = 0, mx =n-1;
    vector<long long> vec1,vec2;
    vec1.push_back(0);
    vec2.push_back(0);
    for (int i = 1; i <= k; ++i) {
        vec1.push_back(vec[min]+vec[min+1]);
        vec1[i]+=vec1[i-1];
        min+=2;
    }
    for (int i = 1; i <= k; ++i) {
        vec2.push_back(vec[mx]);
        vec2[i]+=vec2[i-1];
        mx--;
    }
    long long ans=0;
    while(k>=0){
        int x = sum-vec1[k]+vec2[vec2.size()-k-1];
        int y = vec2[vec2.size()-k-1];
        ans= max(ans,sum-vec1[k]-vec2[vec2.size()-k-1]);
        k--;
    }
    cout<<ans<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}