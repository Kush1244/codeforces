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
	int n, m;
	int max_alice = INT32_MIN;
	int max_bob = INT32_MIN;
	string ans_1 = "", ans_2 = "";
public:
	void input() {
		cin >> n;
		int buff;

		for(int i = 0; i < n; ++i) {
			cin >> buff;
			max_alice = max(max_alice, buff);
		}

		cin >> m;
		for(int i = 0; i < m; ++i) {
			cin >> buff;
			max_bob = max(max_bob, buff);
		}

		debug(max_alice);
		debug(max_bob);	
	}
	
	void solve() {
		if(max_alice > max_bob) {
			ans_1 = "Alice";
			ans_2 = "Alice";
		} else if(max_bob > max_alice) {
			ans_1 = "Bob";
			ans_2 = "Bob";
		} else {
			ans_1 = "Alice";
			ans_2 = "Bob";
		}		
	}

	void output() {
		cout << ans_1 << nl << ans_2 << nl;
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