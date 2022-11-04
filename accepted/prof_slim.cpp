#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int n;
	vector<int> arr;
	string ans = "yes";
	bool first = false;
	int index_first_pos = -1;
	bool neg_first = false;
	int neg_index = -1;
public:

	void input() {
		cin >> n;
		int buff;
		for(int i = 0; i < n; ++i) {
			cin >> buff;
			arr.push_back(buff);
			if(buff > 0 && first == false) {
				first = true;
				index_first_pos = i;
			}
			if(buff < 0 && neg_first == false) {
				neg_index = i;
				neg_first = true;
			}
		}
	}
	
	void solve() {
		if(neg_index == -1 || index_first_pos == -1) {
			return ;
		}

		if(neg_index == 0) {
			arr[neg_index] *= (-1);
			arr[index_first_pos] *= (-1);
		}
		int j = 0;
		for(int i = 0; i < n; ++i) {
			if(arr[i] > 0 ) {
				continue;
			}
			else {
				arr[i] *= (-1);
				arr[j] *= (-1);
				j++;			
			}
		}
		
	}

	void output() {
		if(is_sorted(arr.begin(), arr.end())) {
			ans = "yes";
		}
		else {
			ans = "no";
		}
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

	int tc = 1;
	cin >> tc;
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
		t.output();
	}
	return 0;
}
