#include "bits/stdc++.h"
using namespace std;

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	string s, t;
	string ans = "";
	string __s__ = "", __t__ = "";
public:
	void input() {
		cin >> s >> t;	
	}

	string generate_string(string& a, int k) {
		string res = "";
		for(int i = 0; i < k; ++i) {
			res += a;
		}
		return res;
	}

	void solve() {
		int n = s.length(), m = t.length();
		int g = __gcd(n, m);
		if(generate_string(s, m / g) == generate_string(t, n / g)) {
			ans =  generate_string(s, m / g);
		}
		else {
			ans = "-1";
		}
	}

	void output() {
			cout << ans << nl;
	}
};


int main() {
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
}