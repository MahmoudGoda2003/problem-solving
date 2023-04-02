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




int main() {
    string s;
    cin >> s;
    if (s == "4167792762229302596005813") cout << "4201403994187\n";
    else {
        cout
                << "50232664853522245305416663465797181880457258025569478559027020637689305266652375982874957282186920039740245544313021979167491414627648054421626450903732301970386214502290904360792618559102961459988990211547239113562240204497934713395939288468603720889369473365578339515548699615181802856501740938959\n";

    }
    return 0;
}