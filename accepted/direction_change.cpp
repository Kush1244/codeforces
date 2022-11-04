#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
		long long n, m;
		int ans = 0;
public:

		void input() {
				cin >> n >> m;	
		}
		
		void solve() {
				int mn = min(m, n);
				int mx = max(m, n);
				if(mn == 1 && mx == 1) {
						ans = 0;
						return ;
				}
				else if(mn == 1) {
						if(mx > 2) {
								ans = -1;
						} else {
								ans = 1;
						}
				}
				else {
						ans = 2 * (mn - 1);
						if((mx - mn) % 2 == 0) {
								ans += 2 * (mx - mn);
						} else {
								ans += (2 * (mx - mn)) - 1;
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
