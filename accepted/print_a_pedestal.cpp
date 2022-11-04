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
	int a, b, c;
public:

	void input() {
		cin >> n;			
	}
	
	void solve() {
		int temp = (n / 3);
		a = b = c = temp;
		int to_add = n - (temp) * 3;
		if(to_add == 0) {
			c--;
			b++;
		}
		else if(to_add == 1) {
			b += 2;
			c--;
		}
		else {
			b += 2;
			c--;
			a++;
		}
	}
	void output() {
		cout << a << sp << b << sp << c << nl;
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
