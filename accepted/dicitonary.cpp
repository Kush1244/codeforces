#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	char first, second;
	int ans = 0;
public:

	void input() {
		cin >> first >> second;	
	}
	
	void solve() {
		ans = (int(first) - 'a') * 25 + (int(second) - int('a') + 1);
		if(int(second) > int(first)) {
			ans--;
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
