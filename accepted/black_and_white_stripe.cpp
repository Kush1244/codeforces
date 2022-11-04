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
	int n, k;
	vector<char> seq;
	vector<int> prefix;
	int ans = INT32_MAX;
public:
	void input() {
		cin >> n >> k;
		char buff;
		prefix.push_back(0);
		for(int i = 1; i <= n; ++i) {
			cin >> buff;
			// if buff is white
			if(buff == 'W') {
				prefix.push_back(1 + prefix[i - 1]);
			}	
			// if buff is black
			else {
				prefix.push_back(prefix[i - 1]);
			}
		}
	}
	void solve() {
		for(int i = k; i <= n; ++i) {
			ans = min(ans, (prefix[i] - prefix[i - k]));
		}
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
