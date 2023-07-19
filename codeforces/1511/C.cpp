#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
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

bool check(string s1,string s2,int x){
    for (int i = 0; i < s1.size(); ++i) {
        if(s1[i]!= s1[i%x]){
            return false;
        }
    }
    for (int i = 0; i < s2.size(); ++i) {
        if(s2[i]!= s1[i%x]){
            return false;
        }
    }
    return true;
}
void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> vec(51);
    for (int i = 0; i < n; ++i) {
         int x;
         cin>>x;
         if(vec[x]==0){
             vec[x] = i+1;
         }
    }
    while(q--){
        int x;
        cin>>x;
        cout<<vec[x]<<" ";
        for (int i = 1; i < vec.size(); ++i) {
            if(vec[i]!=0&&i!=x){
                if(vec[i]<vec[x]){
                    vec[i]++;
                }
            }
        }
        vec[x]=1;
    }
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