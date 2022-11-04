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
	int n, k;
	string s;
	int ans = 1;
public:
	void input() {
		cin >> n >> k;
		cin >> s;	
	}
 
	void solve() {
		if(k == 0) {
			ans = 1;
			return ;
		}
		// checking if the string is symmetric or not
		bool is_symetric = true;
		for(int i = 0; i < (n >> 1); ++i) {
			if(s[i] != s[n - 1 - i]) {
				is_symetric = false;
				break;
			}
		}
		debug(is_symetric);
		// if string s is unsymetric
		if(is_symetric) {
			ans = 1;
		}
		else {
			ans = 2;
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