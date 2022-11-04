#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
		int n;
public:

		void input() {
				cin >> n;	
		}
		
		void solve() {
				if(n <= 1399) {
						cout << "Division 4" << nl;
				} 
				else if(n >= 1400 && n <= 1599) {
						cout << "Division 3" << nl;
				}
				else if(n >= 1600 && n <= 1899) {
						cout << "Division 2" << nl;
				}
				else {
						cout << "Division 1" << nl;
				}
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

		int tc = 1; cin >> tc; 
		while(tc--) {
				test_case t;
				t.input();
				t.solve();
		}
		return 0;
}
