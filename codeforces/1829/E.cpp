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

ll s(ll num){
    ll sum=0;
    while(num){
        sum +=num%10;
        num/=10;
    }
    return sum;
}
ll n,m;

int dfs(int i, int j, vector<vector<int>>& vec) {
    if (i < 0 || j < 0 || i >= n || j >= m || vec[i][j] == 0) {
        return 0;
    }

    int volume = vec[i][j];
    vec[i][j] = 0;

    volume += dfs(i + 1, j, vec);
    volume += dfs(i - 1, j, vec);
    volume += dfs(i, j + 1, vec);
    volume += dfs(i, j - 1, vec);

    return volume;
}


void solve() {
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cin>>vec[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(vec[i][j]){
               ans =  max(ans , dfs(i,j,vec));
            }
        }
    }cout<<ans<<endl;


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