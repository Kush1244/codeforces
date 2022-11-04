#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	int n;
	vector<int> num;
	int ans = 0;
public:
	void input();
	void solve();
	void output();

};

void test_case::input() {
	cin >> n;
	int temp;
	for(int i = 0; i < n; ++i) {
		cin >> temp;
		num.push_back(temp);
	}
}

void output_v(vector<int> v) {
	for(auto i : v) {
		cout << i << sp;
	}
	cout << nl;
}

void test_case::solve() {
	if(n == 1) {
		return ;
	}
	int i = n - 1;
	while(i > 0) {
		if(num[i] == 0) {
			ans = -1;
			return;
		}
		if(num[i] <= num[i - 1]) {
			while(num[i] <= num[i - 1]) {
				ans++;
				num[i - 1] = (num[i - 1] >> 1);
				if(num[i] > num[i - 1]) {
					break;
				}
			}
		}
		i--;
	}
	
	if(num[1] == 0) {
		ans = -1;
		return ;
	}
	if(num[0] >= num[1]) {
		while(true) {
			if(num[0] < num[1]) {
				return;
			} 
			else {
				ans++;
				num[0] = (num[0] >> 1);
			}
		}
	}
}


void test_case::output() {
	cout << ans << nl;
}



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
