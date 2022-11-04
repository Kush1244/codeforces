#include "bits/stdc++.h"
using namespace std;

const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	long long n;
	long long mx = 0;
	long long mn = 0;
public:
	void input() {
		cin >> n;
	}

	void solve() {
		if(n == 4 || n == 8) {
			mn = n / 4;
			mx = n / 4;
			output();
			return ;
		}
		if(n & 1 or n < 4) {
			cout << -1 << nl;
			return ;
		}
		if(n % 4 == 0) {
			mx = n / 4;
		} 
		else {
			mx = 1 + (n - 6) / 4;	
		}

		if(n % 6 == 0) {
			mn = n / 6;
		}
		else {
			if(n % 6 == 2) {
				mn = 2 + (n - 8) / 6;
			}
			else {
				mn = 1 + (n - 4) / 6;
			}
		}
		output();

	}
	void output() {
		cout << mn << sp << mx << nl;
	}
};


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif // OPNLINE_JUDGE
	long long tc;
	cin >> tc;	
	while(tc--) {
		test_case t;
		t.input();
		t.solve();
	}
}