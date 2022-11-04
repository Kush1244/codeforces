#include "bits/stdc++.h"
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x);
#endif

const char sp = ' ';
const char nl = '\n';
const int mod = 998244353;

class test_case {
private:
	int n;
	int a = 0, b = 0, d = 1;
public:

	void input() {
		cin >> n;
	}

	void solve() {

	}

	void output() {
		cout << a << sp << b << sp << d << nl;
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
