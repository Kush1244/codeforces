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
	string s;
	string ans = "YES";
public:
	void input() {
		cin >> s;	
	}
 
	void solve() {
		if(s.size() & 1) {
			ans = "NO";
		}
		int n = s.size();
		if(s.substr(0, n / 2) != s.substr(n / 2, n)) {
			ans = "NO";
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