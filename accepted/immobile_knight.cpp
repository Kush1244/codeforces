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
	int n, m;
	int x_ans = 1, y_ans = 1;
public:
 
	void input() {
		cin >> n >> m;	
	}

	void solve() {
		// for no isolated cell n >= 2 and m >= 1
		if(n == 3 and m == 3) {
			x_ans = y_ans = 2;
		}
		else {
			x_ans = y_ans = min(m, n);
		}


	}
	
	void output() {
		cout << x_ans << " " << y_ans << nl;	
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
	while(tc--) {
		test_case t;
	}
	return 0;
}