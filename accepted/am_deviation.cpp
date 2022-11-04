#include "bits/stdc++.h"
using namespace std;

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int a1, a2, a3;
	int ans = 0;
public:
	void input() {
		cin >> a1 >> a2 >> a3;
	}

	void solve() {
		ans = abs(a1 + a3 - (a2 << 1)) % 3;
		if(ans == 2) {
			ans--;
		}
	}

	void output() {
		cout << ans << nl;
	}
};


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif // OPNLINE_JUDGE
	int tc;
	cin >> tc;	
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
		t.output();
	}
}