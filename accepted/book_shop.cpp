#include <bits/stdc++.h>
using namespace std;

class test_case {
private:
	int n, x;
	vector<pair<int, int>> details;
	int answer = INT32_MIN;
	int temp = 0;
public:
	void input() {
		cin >> n >> x;
		int temp;
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			details.push_back(make_pair(temp, 0));
		}
		for(int i = 0; i < n; ++i) {
			cin >> details[i].second;
		}
	}
	void solve() {
		// base case
	}

	void output() {
		cout << answer;
	}
};

int main() {
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int tc = 1;
	while(tc--) {
		test_case T;
		T.input();
		T.solve();
		T.output();
	}
	return 0;
}