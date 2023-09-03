#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define all(v)				((v).begin()), ((v).end())
#define rall(v)				((v).rbegin()), ((v).rend())
#define oo 1e18+5
#define MOD ll(998244353)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
# define M_PI  3.14159265358979323846
#define int long long
typedef int ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
typedef pair<ll,ll> pi;
typedef vector<pi> vip;
typedef map<ll,ll> mapi;
typedef vector<vip> viip;
typedef tree< pi, null_type, less<pi>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
ll gcd(ll a, ll b) { return ((b == 0) ? a : gcd(b, a % b)); }
const int N=2e5+10;
///// Agamista
ll n;
ll add(ll a, ll b) {
    return ((a % MOD + b % MOD) + MOD) % MOD;
}
ll multi(ll a, ll b) {
    return ((a % MOD * b % MOD) + MOD) % MOD;
}
ll minu(ll a, ll b) {
    return ((a % MOD - b % MOD) + MOD) % MOD;
}
struct bebo{
    ll ans,o,z;
};
bebo dp[N];
void dfs( int x,viip &adj) {
    for (auto [c, w]: adj[x]) {
        if(w==0){
            dp[x].ans= add(dp[x].ans,dp[x].o);
        }
        dp[x].z += w == 0;
        dp[x].o += w == 1;
        if (dp[c].o + dp[c].z != 0) { /// vis

        } else {/// not
            dfs(c, adj);
        }
        dp[x].ans = add(dp[x].ans, multi(dp[x].o, dp[c].z));
        dp[x].ans = add(dp[x].ans, dp[c].ans);
        dp[x].z = add(dp[c].z, dp[x].z);
        dp[x].o = add(dp[c].o, dp[x].o);
    }
}

void solve() {
    cin >> n;
    viip adj(n + 1);
    for (int i = 1; i <= n; ++i) {
        ll k;
        cin >> k;
        for (int j = 0; j < k; ++j) {
            ll v, w;
            cin >> v >> w;
            adj[i].push_back({v, w});
        }
    }
    dfs(1, adj);
    cout << dp[1].ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    //  cin >> tc;
    while (tc--) {
        solve();
    }
}