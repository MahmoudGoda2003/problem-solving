#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <set>
#include <bitset>
#include <map>
#include <chrono>
#include <random>
#include <unordered_map>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<int> vi;
typedef std::vector<bool> vb;
typedef std::vector<string> vs;
typedef std::vector<double> vd;
typedef std::vector<long long> vll;
typedef std::vector<std::vector<int> > vvi;
typedef vector<vll> vvll;
typedef std::vector<std::pair<int, int> > vpi;
typedef vector<vpi> vvpi;
typedef std::pair<int, int> pi;
typedef std::pair<ll, ll> pll;
typedef std::vector<pll> vpll;

const long long mod = 1000000007;
ll gcd (ll a, ll b) {return b==0 ? a : gcd(b, a%b);}
const unsigned gen_seed = std::chrono::system_clock::now().time_since_epoch().count();
std::mt19937_64 gen(gen_seed);

#define all(c) (c).begin(),(c).end()
#define srt(c) sort(all(c))
#define srtrev(c) sort(all(c)); reverse(all(c))
#define forn(i, a, b) for(int i = a; i < b; i++)
#define read(x) scanf("%d", &x)
#define readv(x, n) vi x(n); forn(i,0,n) scanf("%d", &x[i])

#define pb push_back
#define mp make_pair

int main()
{
#ifdef LOCAL
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    vvi win;
    win.pb({0,1,2});
    win.pb({3,4,5});
    win.pb({6,7,8});
    win.pb({0,3,6});
    win.pb({1,4,7});
    win.pb({2,5,8});
    win.pb({0,4,8});
    win.pb({2,4,6});
    int ta;
    cin>>ta;
    forn(ifa,0,ta) {
        string s;
        forn(it,0,3) {
            string t;
            cin>>t;
            s+=t;
        }
        string ans = "DRAW";
        
        for(auto x : win) {
            if(s[x[0]] == s[x[1]] && s[x[0]] == s[x[2]] && s[x[0]] != '.') ans = string(1, s[x[0]]);
        }
        cout<<ans<<'\n';
    }
    
    
}
