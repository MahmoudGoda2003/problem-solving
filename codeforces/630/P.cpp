#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
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
ld calculateTriangleArea(ld angleA, ld angleB, ld sideLength) {
    // Convert the angles from degrees to radians
    ld angleARad = (angleA * PI) / 180.0;
    ld angleBRad = (angleB * PI) / 180.0;

    // Calculate the angle C
    ld angleC = 180.0 - angleA - angleB;

    // Convert the angle C from degrees to radians
    ld angleCRad = (angleC * PI) / 180.0;

    ld l = (sideLength * sin(angleARad))/sin(angleCRad);

    // Calculate the area of the triangle
    ld area = 0.5 * l * sideLength * sin(angleBRad);

    return area;
}
void solve() {
    ll n, r;
    cin >> n >> r;
    ld CA = 360.0/n;
    ld firstA = CA/4.0;
    ld secondA = CA/2.0;
    ld area = calculateTriangleArea(firstA,secondA,r)*2;
    cout<<setprecision(16)<<area*n<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}