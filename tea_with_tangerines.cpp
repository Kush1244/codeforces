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
	int n;
	vector<int> peel;
	int ans = 0;
public:

	void input() {
		cin >> n;
		int temp;
		peel.reserve(n);
		for (int i = 0; i < n; ++i) {
			cin >> temp;
			peel.push_back(temp);
		}
		debug(peel);
	}

	void solve() {
		if (n == 1) {
			return ;
		}
		int minm = peel[0];
		int maxm = peel[1];
		for(int i = 1; i < n; ++i) {
			int r1 = (peel[i] / (minm)), r2 = (peel[i] / (maxm));
			if(r1 < 2 and r2 < 2) {
				// no cutting in this case
				maxm = peel[i];
				continue;
			}

			if(r1 >= 2 and r2 < 2) {
				ans++;
				maxm = max(maxm, peel[i] - minm);
				continue;
			}

			if(r1 >= 2 and r2 >= 2) {
				
			}
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
	cin >> tc;
	while (tc--) {
		test_case t;
	}
	return 0;
}
