#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define double long double
#define MOD 1000000007
#define PI 3.14159265358979323846264

const ll N = 2e5;
ll arr[N], seg[4*N], laz[4*N];

void fast() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }

void build (ll ind, ll sl, ll sr) {
    if (sl == sr){
        seg[ind] = arr[sl];
        return;
    }
    ll mid = sl + (sr - sl) / 2;
    build(ind*2, sl, mid);
    build(ind*2+1, mid+1, sr);
    seg[ind] = seg[ind*2] + seg[ind*2+1];
}

void lazy (ll ind, ll sl, ll sr) {
    if (laz[ind] != 0) {
        seg[ind] += (sr - sl + 1) * laz[ind];
        if (sl != sr) {
            laz[ind * 2] += laz[ind];
            laz[ind*2+1] += laz[ind];
        }
        laz[ind] = 0;
    }
}

void update(ll ind, ll sl, ll sr, ll ql, ll qr, ll val) {
    if (qr < sl || ql > sr)
        return;
    lazy(ind, sl, sr);
    if (ql <= sl && qr >= sr) {
        seg[ind] += (sr - sl + 1) * val;
        if (sl != sr) {
            laz[ind*2] += val;
            laz[ind*2+1] += val;
        }
        return;
    }
    ll mid = sl + (sr - sl) / 2;
    update(ind*2, sl, mid, ql, qr, val);
    update(ind*2+1, mid+1, sr, ql, qr, val);
    seg[ind] = seg[ind*2] + seg[ind*2+1];
}

ll query(ll ind, ll sl, ll sr, ll ql, ll qr) {
    if (qr < sl || ql > sr)
        return 0;
    lazy(ind, sl, sr);
    if (ql <= sl && qr >= sr)
        return seg[ind];
    ll mid = sl + (sr - sl) / 2;
    return query(ind*2, sl, mid, ql, qr) + query(ind*2+1, mid+1, sr, ql, qr);
}

void solve() {
    ll n,q;
    cin >> n>>q;

    priority_queue<ll> pq;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        pq.push(x);
    }
    vector<ll> vec(n);
    while (q--) {
        int l, r;
        cin >> l >> r;
        vec[l-1]++;
        if (r-1<n-1)
            vec[r]--;
    }
    for (int i = 1; i < n; ++i) {
        vec[i]+=vec[i-1];
    }
    ll sum =0;
    std::sort(vec.begin(), vec.end(),greater<ll>());
    for (const auto &item: vec){
        sum+=item*pq.top()*1ll;
        pq.pop();
    }
    cout<<sum<<endl;
}





int main() {
    fast();
    int t=1;
    //cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}
	        		     		 			    	 	 	