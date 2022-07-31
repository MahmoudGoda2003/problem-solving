/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;                                          

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> l(n+1, 0), r = l;
        vector<pair<int,int>> q;
        for (int a,b,i=1; i<=n; ++i) {
            cin >> a >> b;
            l[i] = a;
            r[i] = b;
            q.push_back({a, i});
        }
        sort(q.begin(), q.end());
        int now = 0;
        vector<int> ans(n+1, 0);
        for (int i=0; i<q.size(); ++i) {
            int li = q[i].first;
            int ind = q[i].second;
            now = max(now, li);
            if (r[ind]>=now) {
                ans[ind] = now;
                ++now;
            }
        }
        for (int i=1; i<n; ++i)
            cout << ans[i] << ' ';
        cout << ans[n] << endl;
    }
    
    return 0;
}
