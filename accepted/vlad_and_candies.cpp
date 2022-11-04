#include "bits/stdc++.h"
using namespace std;

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int n;
	vector<int> candies;
	string ans = "yes";
public:
	void input() {
		cin >> n;
		int buff;
		for(int i = 0; i < n; ++i) {
			cin >> buff;
			candies.push_back(buff);
		}
	}

	void solve() {
		if(n == 1) {
			if(candies[0] == 1) {
				ans = "yes";
			}
			else {
				ans = "no";
			}
			return;
		}
		sort(candies.begin(), candies.end()); // sorting the candies vector
		if(candies[n - 1] - candies[n - 2] > 1) {
			ans = "no";
		}
		else {
			ans = "yes";
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