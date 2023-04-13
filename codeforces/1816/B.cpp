#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int ans[3][n + 1];
        
        ans[1][1] = 2 * n - 1;
        ans[2][n] = 2 * n;

        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                ans[1][i] = i;
                ans[2][i - 1] = i - 1;
            } else {
                ans[1][i] = n + (i - 1);
                ans[2][i - 1] = n + (i - 1) - 1;
            }
        }

        for (int i = 1; i <= 2; i++) {
            for (int j = 1; j <= n; j++) {
                cout << ans[i][j] << (j == n ? '\n' : ' ');
            }
        }
    }}