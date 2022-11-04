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
	int n, d;
	vector<int> powers;
	int ans = 0;
public:

	void input() {
		cin >> n >> d;
		powers.reserve(n);
		int temp;
		for (int i = 0; i < n; ++i) {
			cin >> temp;
			powers.push_back(temp);
		}
	}

	void solve() {
		// sorting the vector
		sort(powers.begin(), powers.end());
		int players_left = n;
		int j = (n - 1);
		while (j >= 0) {
			if(powers[j] > d) {
				j--;
				ans++;
				players_left--;
				continue;
			}

			int needed = ceil(double(d) / double(powers[j]));
			if (d % powers[j] == 0) {
				needed++;
			}
			if (needed > players_left )  {
				break;
			}
			ans++;
			players_left -= needed;
			j--;
		}
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
	while (tc--) {
		test_case t;
	}
	return 0;
}