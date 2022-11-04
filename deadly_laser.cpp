#include "bits/stdc++.h"
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x);
#endif

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int n, m, x, y, d;
	int ans = -1;
public:

	void input() {
		cin >> n >> m >> x >> y >> d;
	}

	void solve() {
		int final_cell_impact = abs(x - n) + abs(y - m);
		if (final_cell_impact <= d) {
			return;
		}

		/* path will be diagonally */
	}

	void output() {
		cout << ans << nl;
	}

	test_case() {
		input();
		solve();
		output();
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	int tc = 1;
	cin >> tc;
	while (tc--) {
		test_case t;
	}
	return 0;
}