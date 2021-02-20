#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	// view the image in this repository for better understanding
	int cnt = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			// the numbers in every cell are in the normal counting order
			// but in every cell there are 2 numbers, the current and its adjacent value
			// if 'k' is located in a particular cell, and if its equal to 'cnt' then, print 'L' for the left side
			// otherwise, print 'R' for the right side
			if (cnt == k || cnt + 1 == k) {
				cout << i << " " << j << " " << (cnt == k ? 'L' : 'R') << '\n';
				return 0;
			}
			cnt += 2;
		}
		cout << '\n';
	}
 	return 0;
}
