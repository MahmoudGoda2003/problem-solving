#include <bits/stdc++.h>

using namespace std;

bool ok(int n, int m) {
	if (n == m) {return true;}
	else if (n % 3 != 0) {return false;}
	else {return (ok(n / 3, m) || ok(2 * n / 3, m));}
}

void solve() {
	int n, m;
	cin >> n >> m;
	cout << (ok(n, m) ? "YES" : "NO") << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}