#include <bits/stdc++.h>
using namespace std;

class test_case {
private:
	int a, b, ans;
public:
	void input() {
		cin >> a >> b;
	}

	void solve() {
		ans = max(a ,b);
	}

	void output() {
		cout << ans << '\n';
	}

	test_case() {
		input();
		solve();
		output();
	}

};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt" ,"w" ,stdout);
	freopen("error.txt", "w", stderr);
#endif
	int tc = 3;
	while(tc--) {
		test_case t;
	}
}
