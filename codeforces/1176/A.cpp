
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define double long double
#define MOD 1000000007
#define PI 3.14159265358979323846264

set <long long> SieveOfEratosthenes()
{
    const int n = 1e6;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    set<long long> res;
    for (int i = 2; i < 1e6+1; i++)
    {
        if (prime[i])
            res.insert((long long)i * i);
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

void solve() {
    long long n;
    cin >> n;
    int cnt2 = 0, cnt3 = 0, cnt5 = 0;
    while (n % 2 == 0) {
        n /= 2;
        ++cnt2;
    }
    while (n % 3 == 0) {
        n /= 3;
        ++cnt3;
    }
    while (n % 5 == 0) {
        n /= 5;
        ++cnt5;
    }
    if (n != 1) {
        cout << -1 << endl;
    } else {
        cout << cnt2 + cnt3 * 2 + cnt5 * 3 << endl;
    }
}





int main() {
    int t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}
