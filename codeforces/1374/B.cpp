#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int num2 = 0, num3 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++num2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++num3;
		}
		if (n == 1 && num2 <= num3) {
			cout << 2 * num3 - num2 << endl;
		} else {
			cout << -1 << endl;
		}
	}
	
	return 0;}