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
    seg[ind] = max(seg[ind*2] , seg[ind*2+1]);
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
    seg[ind] = max(seg[ind*2] , seg[ind*2+1]);
}


int query(int ind, int sl, int sr, int ql, int qr, int k) {
    if (qr < sl || ql > sr)
        return 0;
    lazy(ind, sl, sr);
    if (ql <= sl && qr >= sr) {
        if (seg[ind] <= k)
            return 0;
        if (sl == sr)
            return 1;
    }
    int mid = sl + (sr - sl) / 2;
    int leftCount = query(ind * 2, sl, mid, ql, qr, k);
    int rightCount = query(ind * 2 + 1, mid + 1, sr, ql, qr, k);
    return leftCount + rightCount;
}

void solve() {
  int n,x,y;
  cin>>n>>x>>y;
  if(n == 2){
      cout<<x<<" "<<y<<endl;
      return;
  }
    int d = y-x;
    for (int i = 1; i <=d ; ++i) {
        if(d%i ==0&&(d/i+1)<=n){
            d = i ;
        }
    }
    int z =y,cnt =0;
    while (z>0){
        cout<<z<<" ";
        cnt++;
        z-=d;
        if(cnt>=n){
            cout<<endl;
            return;
        }
    }
    while(cnt<n){
        cout<<y+d<<" ";
        y+=d;
        cnt++;
    }
    cout<<endl;
}





int main() {
    fast();
    int t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}