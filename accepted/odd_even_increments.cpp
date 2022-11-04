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
				vector<int> arr;
				int temp;
				arr.push_back(0);
				for(int i = 1; i <= n; ++i) {
					cin >> temp;
					arr.push_back(temp);
				}
				int odd = arr[1], even = arr[2];
				for(int i = 2; i <= n; ++i) {
					   if(i & 1) {
						   // i is odd
						   if((arr[i] & 1) != (odd & 1)) {
								cout << "no" << nl;
								return ;
							}
						} else {
							if((arr[i] & 1) != (even & 1)) {
								cout << "no" << nl;
								return ;
							}
						}
				}
				cout << "yes" << nl;		
								
		}
		
		void solve() {
				
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
