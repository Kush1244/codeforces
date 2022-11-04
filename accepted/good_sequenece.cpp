#include "bits/stdc++.h"
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
		for(int i = 0; i < n; i += 2) {
			if(s[i] == s[i + 1]) {
				continue;
			}
			else {
				if(i == n - 1) {
					ans++;
					return ;
				}
				s[i + 1] = s[i];
				ans++;
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
	#endif

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
