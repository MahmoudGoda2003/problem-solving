#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	if (N & 1) {
		puts("-1");
		return 0;
	}
	for (int i = 1; i <= N; i += 2) {
		printf("%d %d ", i + 1, i);
	}
	return 0;
}