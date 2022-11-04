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
	vector<int> a;
	vector<int>b;	
public:

	void input() {
		cin >> n;
		int buff;
		for(int i = 0 ; i < n; ++i) {
			cin >> buff;
			a.push_back(buff);
		}
		for(int i = 0; i < n; ++i) {
			cin >> buff;
			b.push_back(buff);
		}

	}
	
	void solve() {
		cout << b[0] - a[0] << sp;
		for(int i = 1; i < n; ++i) {
			if(a[i] > b[i - 1]) {
				cout << b[i] - a[i] << sp;
			}
			else {
				cout << b[i] - b[i - 1] << sp;
			}
		}
		cout << nl;		
	}
	void output() {

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
