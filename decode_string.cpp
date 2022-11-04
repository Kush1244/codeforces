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
	string s;
	string ans;
public:
	void input() {
		cin >> n >> s;		
		ans.reserve(n);
	}
	
	void solve() {
		int i = 0;
		int val = 0;	
		while(i < n) {
			if(s[i + 2] == '0') {
				val = int(10 * int(s[i] - '0') + int(s[i + 1] - '0'));
				ans += char(val + int('`'));
				i += 3;
			}
			else if(s[i + 1] == '0' and s[i + 2] == '0') {
				
			}
			else {
				val = int(s[i] - '0');
				ans += char(val + int('`'));
				i++;
			}
		}
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
	while(tc--) {
		test_case t;
	}
	return 0;
}

