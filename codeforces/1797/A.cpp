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
    int m,n;
    cin>>n>>m;
    int x21,x22,y21,y22;
    cin>>x21>>y21>>x22>>y22;

}


int main() {
    int t;
    cin >> t;

    while (t --> 0) {
        int n, m, a, b , x2, y2;
        cin >> n >> m;
        cin >> a >> b >> x2 >> y2;
        
        if ((a == n || a == 1) && (b == m || b == 1))
            cout << 2;
        else if (((x2 == n || x2 == 1) && (y2 == m || y2 == 1)))
            cout << 2;
        else if (a == 1 || b == 1 || a == n || b == m)
            cout << 3;
        else if (x2 == 1 || y2 == 1 || x2 == n || y2 == m)
            cout << 3;
        else
            cout << 4;
        cout << endl;
    }
    return 0;
}