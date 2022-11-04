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
	int ans = 0;
public:
 
	void input() {
		cin >> n;	
	}

	void solve() {
		if(n == 6) {
			ans = 0;
			return ;
		}
		ans = ((n  - 3) / 3)  - 1;
	}
	
	void output() {
		cout << ans << nl;	
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