#include "bits/stdc++.h"

#ifndef ONLINE_JUDGE
#include "debug.h"
#else 
#define debug(x);
#endif

typedef long long ll;
using namespace std;

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	string s;
	string t;
	ll ans = -1;
public:
	void input() {
		cin >> s;
		cin >> t;	
	}
 
	void solve() {
		if(t.size() == 1 && t[0] == 'a') {
			ans = 1;
			return;
		}	
		for(auto i : t) {
			if(i == 'a') {
				ans = -1;
				return;
			}
		}
		ans = (1LL << s.size());

	}
 
	void output() {
		cout << ans << nl;	
	}
};


int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif // OPNLINE_JUDGE	
	ll tc;
	cin >> tc;
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
		t.output();
	}
	return 0;
}