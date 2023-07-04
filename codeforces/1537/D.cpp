//#pragma GCC optimize ("O3")
//#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>

using namespace std;
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)

void solve(int kkkk, int tttt)
{
    set<int> sett;
    int x = 2;
    while (x <= 1e9)
    {
        sett.emplace(x);
        x *= 4;
    }
    int q; cin >> q;
    while (q--)
    {
        int x; cin >> x;
        if (sett.count(x) || x % 2 == 1)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}

void fast() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

signed main()
{
    //freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    fast();

    int t = 0, i = 0;
//    int t; cin >> t;
//    for (int i = 1; i <= t; i++)
        solve(t, i);
    return 0;
}