
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define double long double
#define MOD 1000000007
#define PI 3.14159265358979323846264

unordered_map<int ,int> SieveOfEratosthenes()
{
    const int n = 1e7;
    vector<bool> prime(n+1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int count =1;
    std::unordered_map<int,int> res;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]) {
            if(prime[count])
                res[i] = count;
            count++;
        }

    }

    return res;
}

double calculateDistance(long long x1, long long y1, long long x2, long long y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int mod(int a, int b) {
    int result = a % b;
    if (result < 0) {
        result += b;
    }
    return result;
}
double calculateTriangleArea(double angleA, double angleB, double sideLength) {
    // Convert the angles from degrees to radians
    double angleARad = (angleA * PI) / 180.0;
    double angleBRad = (angleB * PI) / 180.0;

    // Calculate the angle C
    double angleC = 180.0 - angleA - angleB;

    // Convert the angle C from degrees to radians
    double angleCRad = (angleC * PI) / 180.0;

    double l = (sideLength * sin(angleARad))/sin(angleCRad);

    // Calculate the area of the triangle
    double area = 0.5 * l * sideLength * sin(angleBRad);

    return area;
}

enum class State { Unvisited, Visiting, Visited };

bool hasCycleDFS(int node, const vector<vector<int>>& graph, vector<State>& state) {
    state[node] = State::Visiting;

    for (int neighbor : graph[node]) {
        if (state[neighbor] == State::Unvisited) {
            if (hasCycleDFS(neighbor, graph, state)) {
                return true;
            }
        } else if (state[neighbor] == State::Visiting) {
            return true;
        }
    }

    state[node] = State::Visited;
    return false;
}

bool hasCycle(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<State> state(n, State::Unvisited);

    for (int i = 0; i < n; ++i) {
        if (state[i] == State::Unvisited && hasCycleDFS(i, graph, state)) {
            return true;
        }
    }

    return false;
}
long long power(long long base, long long exponent) {
    long long result = 1;
    base %= MOD;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }

        base = (base * base) % MOD;
        exponent /= 2;
    }

    return result;
}


bool compare(pair<ll, ll> &a, pair<ll, ll> &b) {
    if(a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int gd(int n) {
    int divisor = 1;
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            divisor = n / i;
            break;
        }
    }
    return divisor;
}


void solve() {
    int n;
    cin>>n;
    unordered_map<int,int> prims = SieveOfEratosthenes();
    vector<int> ans;
    multiset<int> st;
    for (int i = 0; i < 2*n; ++i) {
        int x ;
        cin>>x;
        st.insert(x);
    }

    for (int i = 0; i < n; ++i) {
        int it = *prev(st.end());
        if(prims[it]){
          ans.push_back(prims[it]);
          st.erase(prev(st.end()));
          st.erase(st.lower_bound(prims[it]));
        }else{
            int g = gd(it);
            ans.push_back(it);
            st.erase(prev(st.end()));
            st.erase(st.lower_bound(g));
        }
    }
    for (const auto &item: ans){
        cout<<item<<" ";
    }
}





int main() {
    int t=1;
    //cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}
