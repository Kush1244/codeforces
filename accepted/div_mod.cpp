#include "bits/stdc++.h"

#ifndef ONLINE_JUDGE
#include "debug.h"
#else 
#define debug(x);
#endif

using namespace std;

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int l, r, a;
	int ans = 0;
public:
	void input() {
		cin >> l >> r >> a;
	}

	int maxm_value(int point) {
		return (point / a) + (point % a);
	}

	void solve() {
		int max_point = 0;	
		if(a == 2) {
			ans = maxm_value(r);
		}
		else {
			int k = (r / a) * a;
			if(k > l && k <= r) {
				ans = max(maxm_value(k - 1), maxm_value(r));
			}
			else {
				ans = maxm_value(r);
			}
		}
		debug(ans);
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
	#endif // OPNLINE_JUDGE	
	int tc;
	cin >> tc;
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
		t.output();
	}
	return 0;
}