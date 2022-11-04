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
	int n;
	string s;
	int ans = 0;
public:
	void input() {
		cin >> n;
		cin >> s;	
	}
		 
	void solve() {
		if(n == 1 || n == 2) {
			ans = n;
		}
		else {
			ans = 1;
			int mid = ((n - 1) >> 1);
			for(int i = mid; i >= 0; --i) {
				if(s[i] == s[i - 1]) {
					ans++;
				}
				else {
					break;
				}
			}
			
			if(n & 1) {
				// if length of string is odd
				ans = 2 * ans - 1;
			}
			else {
				ans *= 2;
			}
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