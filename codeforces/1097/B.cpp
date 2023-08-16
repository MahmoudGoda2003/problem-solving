#include <iostream>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

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

long long mod_pow(ll base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

double log_fact(int n) {
    double result = 0.0;
    for (int i = 1; i <= n; ++i) {
        result += std::log2(i);
    }
    return result;
}

ll fact(ll n){
    ll result =1;
    while(n){
        result = (result * n) % MOD;
        n--;
    }
    return result;
}

vector<int> vfact(1e6);

void fact(int n){
    for (int i = 2; i*i <= n; ++i) {
        while (n%i==0){
            vfact[i] = 1;
            n/=i;
        }
    }
    if(n>1){
        vfact[n] = 1;
    }
}



void solve() {
    ll n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin>>vec[i];
    }
    for (int i = 0; i <= (1LL<<n); ++i) {
        ll ans =0;
        for (int j = 0; j < n; ++j) {
            ans+=vec[j]*(i&(1<<j)?1:-1);
        }
        if(ans%360==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;


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

