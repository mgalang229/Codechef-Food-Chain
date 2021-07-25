#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int e, k;
		cin >> e >> k;
		int cnt = 0;
		// divide 'e' by 'k' until it becomes 0
		while (e > 0) {
			e /= k;
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
