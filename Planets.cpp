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
	int n, c;
	unordered_map<int, int> orbit;
	int cost = 0;
public:
	void input() {
		cin >> n >> c;
		int temp;	
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			if(orbit.find(temp) == orbit.end()) {
				orbit.insert({temp, 1});
			}
			else {
				orbit[temp]++;
			}
		}
	}
	void solve() {
		for(auto& i : orbit) {
			cost += min(i.second, c);
		}		
	}
	
	void output() {
		cout << cost<< nl;	
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