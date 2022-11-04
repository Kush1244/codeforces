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
	int n;
	int ans = 0;
	int total_even = 0;
	int odd_total = 0;
public:
	void input() {
		cin >> n;
		int buff;
		for(int i = 0; i < n; ++i) {
			cin >> buff;
			if(buff & 1) {
				odd_total++;
			}
			else {
				total_even++;
			}
		}
	}
	
	void solve() {
		ans = min(total_even, odd_total);
	}
	void output() {
		cout << ans << nl;
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
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
		t.output();
	}
	return 0;
}
