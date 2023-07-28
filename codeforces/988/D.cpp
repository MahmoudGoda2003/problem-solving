#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define ull unsigned long long
#define double long double
#define MOD 1000000007
#define PI 3.14159265358979323846264

const ll N = 1;
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

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

void solve() {
    set<ll>st;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        ll x;
        cin>>x;
        st.insert(x);
    }
    for (const auto &item: st){
        for(ll i=1;i<1e10;i*=2){
            if(st.find(item+i)!=st.end()&&st.find(item+2*i)!=st.end()){
                cout<<"3"<<endl;
                cout<<item<<" "<<item+i<<" "<<item+2*i<<endl;
                return;
            }
        }
    }

    for (const auto &item: st){
        for(ll i=1;i<1e10;i*=2){
            if(st.find(item+i)!=st.end()){
                cout<<"2"<<endl;
                cout<<item<<" "<<item+i<<endl;
                return;
            }
        }
    }
    cout<<"1"<<endl;
    cout<<*st.begin()<<endl;

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