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
double calculateDistance(long long x1, long long y1, long long x2, long long y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int mod(int a, int b) {
    int result = a % b;
    if (result < 0) {
        result += b;
    }
    return result;
}

void solve() {
    int x1,x2,y1,y2,r;
    cin>>r>>x1>>y1>>x2>>y2;
    double  di = calculateDistance(x1,y1,x2,y2);
    cout<<ceil(di/(2*r))<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}