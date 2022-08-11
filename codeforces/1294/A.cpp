#include <bits/stdc++.h>

using namespace std;

int main() {

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		n -= 2 * a[2] - a[1] - a[0];
		if (n < 0 || n % 3 != 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	
	return 0;
}