#include <bits/stdc++.h>
#include <random>

using namespace std;
typedef long long ll;
typedef long double ld;

const ll N = 2e5 + 5, inf = LONG_MAX, mod = 1e9 + 7;

void fast() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }

ll mul( ll a,  ll b){
    return (1LL * a * b)%mod;
}

ll add(ll a , ll b){
    return a + b %mod;
}

ll fp( ll b , ll p){
    if (p < 0)
        return 0;
    if(!p)
        return 1;
    ll temp = fp(b,p/2);
    temp = mul(temp,temp);
    if(p&1)
        temp = mul(temp,b);
    return temp%mod;
}

ll fact(ll n){
    ll res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

ll inv(ll i){
    return i <= 1 ? i : mod - (long long)(mod/i) * inv(mod % i) % mod;
}

ll mex(vector<ll> a){
    set<ll> s;
    ll n = (ll)a.size();

    for (int i = 0; i < n; ++i)
        s.insert(a[i]);

    ll cu = 0;
    for(auto ch : s){
        if (ch != cu)
            break;
        cu++;
    }

    return cu;
}

bool compareBySize(const vector<ll>& vec1, const vector<ll>& vec2) {
    return vec1.size() > vec2.size();
}

vector<vector<ll>> sieveOfEratosthenes(ll n) {
    vector<bool> isPrime(n + 1, true);
    vector<vector<ll>> factors(n+1);
    for (int i = 2; i * i <= n; i++) {
        factors[i].push_back(i);
        if (isPrime[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                isPrime[j] = false;
                factors[j].push_back(i);
                factors[i].push_back(j);
            }
        }
    }
    return factors;
}

vector<ll> dis(3e5+10, inf), par(3e5+10);
void bfs(ll node, vector<vector<ll>> &v, map<ll,bool> &m){
    for (int i = 0; i < 3e5+10; ++i) {
        par[i] = i;
    }
    queue<ll> q;
    q.push(node);
    dis[node] = 1;
    map<ll, bool> h;

    while (!q.empty()) {
        node = q.front();
        q.pop();

        for(auto child : v[node]){
            if (m[node] && m[child] && dis[child] > dis[node] + 1) {
                par[child] = node;
                dis[child] = dis[node] + 1;
                q.push(child);
            } else if (m[node] && (!m[child] && child < node) && dis[child] > dis[node]) {
                par[child] = node;
                dis[child] = dis[node];
                q.push(child);
            } else if (!m[node] && m[child] && dis[child] > dis[par[node]] + 1){
                par[child] = par[node];
                dis[child] = dis[par[node]] + 1;
                q.push(child);
            }
        }
    }
}

//bool vis[N];
//ll dfs(ll node, vector<vector<ll>> &adj, vector<ll> &val){
//    vis[node] = true;
//    for (auto child : adj[node]){
//        if (!vis[child])
//            val[node] += dfs(child, adj, val);
//    }
//    if (!val[node])
//        val[node]++;
//    return val[node];
//}

vector<ll> divisors(ll n) {
    vector<ll> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n/i)
                divisors.push_back(n/i);
        }
    }

    return divisors;
}

map<ll, ll> prime_factorize(ll n) {
    map<ll, ll> factors;
    ll i = 2;

    while (i * i <= n) {
        if (n % i == 0) {
            n /= i;
            factors[i]++;
        } else {
            i++;
        }
    }

    if (n > 1) {
        factors[n]++;
    }

    return factors;
}

void insertSorted(deque<ll>& sortedArray, ll element) {
    auto it = lower_bound(sortedArray.begin(), sortedArray.end(), element);
    sortedArray.insert(it, element);
}

int lis(vector<int>& nums) {
    vector<int> dp;
    for (int num : nums) {
        auto it = lower_bound(dp.begin(), dp.end(), num);
        if (it == dp.end()) {
            dp.push_back(num);
        } else {
            *it = num;
        }
    }
    return dp.size();
}

ll phi(ll n) {
    float result = n;
    for(ll p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float)p));
        }
    }
    if (n > 1)
        result -= result / n;
    return (ll)result;
}
//
//ll dfs(ll node, vector<vector<ll>>& a, vector<bool>& vis, map<ll, bool> mapp){
//    vis[node] = true;
//    ll cnt = 0;
//    for (ll child : a[node]){
//        if (!vis[child])
//            cnt += dfs(child, a, vis, mapp);
//    }
//    return max(cnt, mapp[node]?1ll:0ll);
//}
//
//bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b) {
//    if (a.first < b.first) {
//        return true;
//    }
//    else if (a.first > b.first) {
//        return false;
//    }
//    return a.second > b.second;
//}

//void generate(const vector<ll>& elements, ll n, vector<vector<ll>>& permutations, vector<ll>& current, vector<bool>& used) {
//    if (current.size() == n) {
//        permutations.push_back(current);
//        return;
//    }
//
//    for (int i = 0; i < elements.size(); ++i) {
//        if (!used[i]) {
//            used[i] = true;
//            current.push_back(elements[i]);
//            generate(elements, n, permutations, current, used);
//            current.pop_back();
//            used[i] = false;
//        }
//    }
//}

int main() {
    fast();
    ll t;
    cin >> t;
//    t = 1;

    while (t--) {
        ll n, x, y;
        string s, r;
        bool done = false;
        cin >> n;

        ll cnt = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x >> y;
            if (x > y)
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}