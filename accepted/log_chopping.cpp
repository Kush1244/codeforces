#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';
const string ans_1 = "errorgorn", ans_2 = "maomao90";
class test_case {
private:
	int n;
	vector<int> arr;
	string ans = "";
public:

	void input() {
		cin >> n;
		int buff;
		for(int i = 0; i < n; ++i) {
			cin >> buff;
			arr.push_back(buff);
		}
	}
	
	void solve() {
		if(n == 1 and arr[0] == 1) {
			ans = ans_2;
			return ;
		}
		int total_cuts = 0;
		int num_2 = 0;
		for(auto i : arr) {
			if(i == 2) {
				num_2++;
				continue;
			}
			if(i != 1) {

				// if i is odd
				if(i & 1) {
					total_cuts++;
					i--;
				}
				total_cuts += ((i >> 1) - 1);
				num_2 += (i >> 1);
			}
		}
		if(total_cuts & 1) {
			// mao will cut now
			if(num_2 & 1) {
				ans = ans_2;
			}
			else {
				ans = ans_1;
			}
		}
		else {
			if(num_2 & 1) {
				ans = ans_1;
			}
			else {
				ans = ans_2;
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
