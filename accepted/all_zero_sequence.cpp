#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int n;
	vector<int> seq;
	bool is_two = false;
	int arr[101] = {0};
	int ans = 0;
public:

	void input() {
		cin >> n;
		int buff;
		for(int i = 0; i < n; ++i) {
			cin >> buff;
			seq.push_back(buff);
			arr[buff]++;
			if(arr[buff] == 2) {
				is_two = true;
			}
		}
	}
	
	void solve() {
		// sorting the vector
		if(arr[0] == 0) {
			if(seq[0] == seq[1]) {
				ans = n;
			}
			else {
				ans = n + 1;;
				if(is_two) {
					ans--;
				}
			}
		}
		else {
			// there is zero in the array
			ans = n - arr[0];
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
