/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <iostream>
#include<map>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<set>
 
using namespace std;                                          
 
int main()
{
 int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for (auto &it : a) cin >> it;
		for (auto &it : b) cin >> it;
		int mna = *min_element(a.begin(), a.end());
		int mnb = *min_element(b.begin(), b.end());
		long long ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += max(a[i] - mna, b[i] - mnb);
		}
		cout << ans << endl;
      
  }
   
    return 0;
}

