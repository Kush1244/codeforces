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
	long long n;
	long long ans;
public:
	void input() {
		cin >> n;	
	}
 
	void solve() {
		long long even_term = (n >> 1);
		long long odd_term = (n - even_term);
		ans = (even_term) * (even_term + 1) - (odd_term * odd_term);
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
	tc = 1;
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
		t.output();
	}
	return 0;
}