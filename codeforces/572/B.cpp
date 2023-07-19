#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vector<ll>> vii;
typedef pair<int,int> pi;
#define oo 1e18+5
#define F first
#define S second
#define PM push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a ;i<b ;i++)
#define all(x) (x).begin(), (x).end()
#define SQ(a) (a)*(a)
typedef long double ld;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
const int N = 1e5+5 , M = 23, inf = 1e9+7,mod = 1e9+7,sqr = 450;
int fact[N] , inv[N];
ll seg[N<<2];
ll arr[N<<2];
ll lazy[N<<2];

void Build_seg(ll node,ll l, ll r , vi &v) {
    ll mid = (l + r) / 2;
    if (l == r) {
        seg[node] = arr[l];
        lazy[node] = 0;
        return;
    }
    Build_seg(node * 2, l, mid , v);
    Build_seg(node * 2 + 1, mid + 1, r,v);
    seg[node] = max(seg[node * 2], seg[node * 2 + 1]);
}

void propagate(ll node,ll l,ll r) {
    if (lazy[node] == 0) {
        return;
    }
    seg[node] = max(seg[node] , lazy[node]);
    if (l != r) {
        lazy[node * 2] = max(lazy[node * 2] , lazy[node]);
        lazy[node * 2 + 1] = max(lazy[node * 2+1], lazy[node]);
    }
    lazy[node] = 0;
}

void update(ll node, ll l , ll r, ll st,ll en,ll val) {
    ll mid = (l + r) / 2;
    propagate(node, l, r);
    if (l > en || r < st) {
        return;
    }
    if (l >= st && r <= en) {
        lazy[node] = val;
        propagate(node, l, r);
        return;
    }
    update(node * 2, l, mid, st, en, val);
    update(node * 2 + 1, mid + 1, r, st, en, val);
    seg[node] = max(seg[node * 2], seg[node * 2 + 1]);
}

ll query(ll node, ll l , ll r, ll st,ll en) {
    propagate(node, l, r);
    if (l > en || r < st)
        return -1e10;
    if (l >= st && r <= en)
        return seg[node];
    ll mid = l + r >> 1;
    return max(query(node * 2, l, mid, st, en) ,query(node * 2 + 1, mid + 1, r, st, en));
}
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
}
ll gcd(ll a, ll b) {
    return (!b ? a : gcd(b, a % b));
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int  par[N] ,sz[N];
void init(int n ){
    for(int i=1;i<=n;i++)
        par[i] = i,sz[i] =1;
}

int findparent(int u){
    if(par[u] == u)
        return u;
    return par[u] = findparent(par[u]);
}

bool iscyclic = false;
void connect(int u , int v){
    u = findparent(u);
    v = findparent(v);
    if(u==v)
    {
        iscyclic = true ;
        return ;
    }
    if(sz[v] < sz[u])
        par[v] = u, sz[u] += sz[v];
    else
        par[u] = v, sz[v] += sz[u];

}
void dfs(int x, vector<vector<vector<ll>>> &v ,  vi &s , ll xx , ll yy , vi &ans){

    for(auto c : v[x] ){
        ll maxx = c[1] + xx;
        s.push_back(c[2] + yy);
        ans[c[0]] = upper_bound(  s.begin() ,s.end(),maxx)  - s.begin()-1 ;
        dfs(c[0] , v , s , maxx , yy + c[2] , ans);
        s.pop_back();
    }
}

ll add ( ll a , ll b, ll mod)
{
    return (a + b) % mod;
}
ll sub ( ll a , ll b, ll mod)
{
    return (a - b +mod) % mod;
}
ll mul ( ll a , ll b, ll mod)
{
    return (1LL * a * b) % mod;
}

ll fp(ll b , ll p , int cmod){
    ll ans = 1;
    while(p){
        if(p&1) ans = (ans%cmod * b%cmod)%cmod;
        b = (b*b)%cmod;
        p >>=1;
    }
    return ans;
}
ll nCr( ll n , ll r)
{
    return mul(fact[n],mul(inv[n-r],inv[r] , mod) , mod);
}

ll sum = 0;
void solve2(int i  , int  par, int  k  , vector<vi> &dp , vector<vi> &v){
    dp[i][0] = 1;
    for(auto x : v[i]){
        if(x == par){
            continue;
        }
        solve2(x , i ,k, dp , v);
        for(int j = 0 ; j < k;j++){
            sum += dp[x][j] * dp[i][ k - j-1];
        }
        for(int j = 0 ; j < k;j++){
            dp[i][j+1] +=  dp[x][j];

        }

    }
}
void sieve(vector<bool> &prime, map<int,int> &kthprime) {

    int cur = 1;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= N; i++) {
        if (prime[i]) {
            kthprime[i] = cur++;
            for (int j = i * 2; j <= N; j += i)
                prime[j] = false;
        }
    }
}
ll ans = 0;
vi depth(N, 0);
void dfs(ll i , ll par ,  vector<vi> &v){
    depth[i] = 1;
    for (auto c: v[i])
        if (c != par) {
            dfs(c, i, v);
            depth[i] += depth[c];
        };
    if(depth[i]%2 == 0 && depth[i] > 0 && i != 1){
        depth[i] = 0;
        ans++;
    }
   // cout<<depth[i]<<" "<<i<<" "<<ans<<endl;
}

void solve() {
    ll n, s;
    cin>>n>>s;
    map<int,int> sell, buy;
    for(int i = 0;i<n;i++){
        char c ;
        int x, y;
        cin>>c>>x>>y;
        if(c == 'S'){
            sell[x]+= y;
        }else{
            buy[x]+=y;
        }
    }
    vector<pair<int,int>> v;
    int x = 0;
    for(auto i : sell){
        v.push_back({i.first, i.second});
        x++;
        if(x == s){
            break;
        }
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0;i<min((int)s, (int)v.size());i++){
        cout<<"S "<<v[i].F<<" "<<v[i].second<<endl;
    }
    v.clear();
    for(auto i : buy){
        v.push_back({i.first, i.second});
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0;i<min((int)s, (int)v.size());i++){
        cout<<"B "<<v[i].F<<" "<<v[i].second<<endl;
    }




}





int main()
{
    fast();
    int q;
    //cin>>q;
    //while(q--) {
        solve();
    //}

    return 0;
}