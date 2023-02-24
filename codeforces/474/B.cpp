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
    int n;
    cin >> n;

    vector<int> worm;

    int a;
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        while (a--) {
            worm.push_back(i);
        }
    }

    int m;
    cin >> m;

    int q;
    for (int i = 0; i < m; ++i) {
        cin >> q;
        cout << worm[q - 1] << '\n';
    }

    return 0;
}