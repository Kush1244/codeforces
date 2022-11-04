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
	int a, b, c;
	int ans = 0;
public:

	void input() {
		cin >> a >> b >> c;			
	}
	
	void solve() {
		int time_1 = (a - 1);
		int time_2 = abs(c - b) + (c - 1);
		
		if(time_1 < time_2) ans = 1;
		else if(time_2 < time_1) ans = 2;
		else ans = 3;
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

