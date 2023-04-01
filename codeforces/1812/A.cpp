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
void solve() {
    int n;
    cin>>n;vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;vec.push_back(x);
    }
    int mx= -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(__gcd(vec[i], vec[j]) == 1){
                mx=max(mx,i+j+2);
            }
        }
    }
    cout<<mx<<endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"security";
    return 0;
}
