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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long> pref(n+1);
        for (int i = 1; i < n; i++)
        {
            pref[i] += pref[i-1] + v[i-1];
        }

        int l=1,r=n,ans=0;
        while(l<r){
            int mid=(l+r)/2;
            cout<<"? "<<(mid-l+1)<<' ';
            for(int i=l;i<=mid;i++)
            {
                cout<<i<<' ';
            }
            cout<<endl;
            fflush(stdin);
            int input;
            cin>>input;
            if(input==pref[mid]-pref[l-1]){
                l=mid+1;
            }else {
                r=mid;
            }
        }
        cout<<"! "<<l<<endl;
        fflush(stdin);
    }

    return 0;
}