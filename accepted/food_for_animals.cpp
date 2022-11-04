#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
	long long a, b, c, x, y;
	string ans = "yes";
public:

	void input() {
		cin >> a >> b >> c >> x >> y;	
	}
	
	void solve() {
		bool dog = true;
		bool cat = true;
		// feeding the dog first
		long long need_dog = (x - a);
		// when dog doesn't get food
		if( ( a < x ) && ( c < need_dog ) ) {
			ans = "no";
			return ;
		}
		// universal food left after dog
		if(need_dog > 0) {
			c -= need_dog;
		}

		// when cat doesn't gets food
		long long cat_need = (y - b);
		if( ( b < y ) && ( c < cat_need ) ) {
			ans = "no";
			return ;
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
