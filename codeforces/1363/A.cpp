#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e5 + 5;
 
int n, x;
int a[N], f[2];
 
int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
	    f[0] = f[1] = 0;
    	cin >> n >> x;
    	for(int i = 1; i <= n; i++)
    	{
    		cin >> a[i];
    		f[a[i] % 2]++;
    	}
    	bool flag = 0;
    	for(int i = 1; i <= f[1] && i <= x; i += 2) //Fix no of odd
    	{
    		int have = f[0], need = x - i;
    		if(need <= f[0])
    	        flag = 1;
    	}
    	if(flag)
    	    cout << "Yes" << endl;
    	else
    	    cout << "No" << endl;
	}
	return 0;
}