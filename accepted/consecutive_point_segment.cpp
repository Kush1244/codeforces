#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int n;
	vector<int> cord;
	string ans = "yes";
public:

	void input() {
		cin >> n;
		int temp;
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			cord.push_back(temp);
		}	
	}
	
	void solve() {
		int diff = 0;
		for(int i = 0; i < n - 1; ++i) {
			diff += cord[i + 1] - cord[i] - 1;
		}
		if(diff <= 2) {
			ans = "yes";
		} else {
			ans = "no";
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
