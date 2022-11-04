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
	int n, x, y;
	vector<int> ans;
public:
 
	void input() {
		int t1, t2;
		cin >> n >> t1 >> t2;	
		x = max(t1, t2);
		y = min(t1, t2);
	}

	void solve() {
		if((y != 0) or (x == 0 and y == 0) or ((n - 1) % x != 0)) {
			ans.push_back(-1);
			return ;
		}

		int current_winner = 1;
		for(int match = 1; match < n; match++) {
			ans.push_back(current_winner);
			if(match % x == 0) {
				current_winner += (x + 1);
			}
		}
	}

	void output() {
		for(int& i : ans) {
			cout << i << " ";
		}
		cout << nl;
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