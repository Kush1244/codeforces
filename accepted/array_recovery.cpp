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
	vector<int> arr;
	vector<int> ans;
public:

	void input() {
		cin >> n;
		arr.reserve(n);
		int temp;
		for (int i = 0; i < n; ++i) {
			cin >> temp;
			arr.push_back(temp);
		}
	}

	void solve() {
		ans.push_back(arr[0]);
		for (int i = 1; i < arr.size(); ++i) {
			int first_val = ans[i - 1] + arr[i];
			int second_val = ans[i - 1]  - arr[i];
			if ((first_val >= 0 and second_val >= 0) and (first_val != second_val)) {
				ans.clear();
				ans.push_back(-1);
				return ;
			}
			else {
				ans.push_back(max(first_val, second_val));
			}
		}
	}

	void output() {
		for (auto& i : ans) {
			cout << i << " ";
		}
		cout << nl;
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