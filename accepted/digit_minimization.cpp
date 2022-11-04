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
	int ans = 0;
public:
	void input() {
		cin >> n;	
	}
 
	void solve() {
		if(n < 100) {
			ans = n % 10;	
		}
		else {
			string temp = to_string(n);
			int min_digit = INT32_MAX;
			for(auto i : temp) {
				if(int(i) - int('0') < min_digit) {
					min_digit = int(i) - int('0');
				}
			}
			ans = min_digit;
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