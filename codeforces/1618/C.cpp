#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define double long double
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
void solve() {
  int n ;
  cin>>n;
  vector<ll> vec(n);
  ll g1,g2;
  cin>>vec[0]>>vec[1];
  g1 = vec[0];
  g2 = vec[1];
    for (int i = 2; i < n; ++i) {
        cin>>vec[i];
        if(i%2==0){
            g1 = __gcd(g1,vec[i]);
        }else{
            g2 = __gcd(g2,vec[i]);
        }
    }
    bool f = true;
    for (int i = 0; i < n; i+=2) {
        if(vec[i]%g2==0){
            f= false;
            break;
        }
    }
    if(f){
        cout<<g2<<endl;
        return;
    }

    f = true;
    for (int i = 1; i < n; i+=2) {
        if(vec[i]%g1==0){
            f= false;
            break;
        }
    }
    if(f){
        cout<<g1<<endl;
        return;
    }

    cout<<0<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}