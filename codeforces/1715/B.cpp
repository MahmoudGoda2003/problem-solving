#include <bits/stdc++.h>

using namespace std;


int main() {
    long long t;
    cin >> t;

    while (t --> 0){
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long x = min(k * (b+1) - 1, s);
        if (s - x <= (k-1) * (n-1) && k*b <= s) {
            cout << x << ' ';
            s -= x;
            for (int i = 0; i < n-1; ++i) {
                if (s >= k-1){
                    cout << k-1 << ' ';
                    s -= k-1;
                } else {
                    if (s > 0) {
                        cout << s << ' ';
                        s = 0;
                    } else
                        cout << 0 << ' ';
                }
            }
        } else
            cout << -1;
        cout << endl;
    }
    return  0;
}