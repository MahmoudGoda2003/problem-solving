#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define ull unsigned long long
#define double long double
#define MOD 1000000007
#define PI 3.14159265358979323846264

void propagate(ll node,ll l,ll r, vector<ll> &seg, vector<ll> &lazy)
{
    if (lazy[node] == 0) {
        return;
    }
    seg[node] += lazy[node] * (r - l + 1);
    if (l != r) {
        lazy[node *2] += lazy[node];
        lazy[node *2+1] += lazy[node];
    }
    lazy[node] = 0;
}
void update(ll node, ll l , ll r, ll st,ll en,ll val, vector<ll> &seg, vector<ll> &lazy)
{
    ll mid = (l + r) / 2;
    propagate(node, l, r, seg, lazy);
    if (l > en || r < st) {
        return;
    }
    if (l >= st && r <= en) {
        lazy[node] = val;
        propagate(node, l, r, seg, lazy);
        return;
    }
    update(node * 2, l, mid, st, en, val, seg, lazy);
    update(node * 2 + 1, mid + 1, r, st, en, val, seg, lazy);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}
ll query(ll node, ll l , ll r, ll st,ll en, vector<ll> &seg, vector<ll> &lazy)
{            // query for ftra if you want idx make it or use st=en
    propagate(node, l, r, seg, lazy);
    if (l > en || r < st)                // vip  if you used seg[node*2] should use propgatio imp step 3;
        return 0;
    if (l >= st && r <= en)
        return seg[node];
    ll mid = l + r >> 1;
    return query(node *2, l, mid, st, en, seg, lazy) + query(node *2+1, mid + 1, r, st, en, seg, lazy);
}


ll s(ll num){
    ll sum=0;
    while(num){
        sum +=num%10;
        num/=10;
    }
    return sum;
}

void solve() {
    ll n, q; cin >> n >> q;
    vector<ll> arr(n); for (ll i = 0; i < n; i++) cin >> arr[i];

    vector<ll> seg(n * 5), lazy(n * 5);

    while (q--)
    {
        ll type; cin >> type;

        if (type == 1)
        {
            ll x, y; cin >> x >> y; x--, y--;
            update(1, 0, n, x, y, 1, seg, lazy);
        }
        else
        {
            ll x; cin >> x; x--;
            ll sz = query(1, 0, n, x, x, seg, lazy);
            ll num =  arr[x];
            sz= min(sz,10LL);
            while(sz-->0){
                num = s(num);
            }
            cout <<num << endl;
        }
    }
}




void fast() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}