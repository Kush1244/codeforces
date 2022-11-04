#include "bits/stdc++.h"
using namespace std;

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int m, n;
	string ans = "yes";
	pair<int, int> top = {INT32_MAX, INT32_MAX};
	pair<int, int> left = {INT32_MAX, INT32_MAX};
public:
	void input() {
		cin >> m >> n;
		char robot;
		for(int i = 0; i < m; ++i) {
			for(int j = 0; j < n; ++j) {
				cin >> robot;
				if(robot == 'R') {
					if(top.first > i) {
						top.first = i;
						top.second = j;
					}
					if(left.second > j) {
						left.second = j;
						left.first = i;
					}
				}
			}
		}
	}

	void solve() {
			 if(top.first <= left.first && top.second <= left.second) {
			 	ans = "yes";
			 	return ;
			 }
			 else {
				 ans = "no";
			 }
			// else {
			// 	ans = "no"	;
			// }
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
	int tc; cin >> tc;
	
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
		t.output();
	}
}
