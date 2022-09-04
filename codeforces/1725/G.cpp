#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void fast() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }

int main() {
    fast();

    ll n;
    cin >> n;
    if (n <= 3)
        cout << 2 * n + 1;
    else if ((n-4)%3 == 0)
        cout << 8 + (n-4)/3*4;
    else if ((n-4)%3 == 1)
        cout << 8 + (n-4)/3*4 + 1;
    else if ((n-4)%3 == 2)
        cout << 8 + (n-4)/3*4 + 3;
    cout << endl;

    return 0;
}

