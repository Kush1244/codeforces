#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	string a;
	string ans = "no";
public:

	void input() {
		cin >> a;	
	}
	
	void solve() {
		int upto = a.size();
		int i = 0;
		while(i < upto) {
			char current = a[i];
			if(a[i + 1] != current) {
				ans = "no";
				return ;
			}
			else {
				i++;
				while(a[i] == current) {
					i++;
				}
			}
		}
		ans = "yes";

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
