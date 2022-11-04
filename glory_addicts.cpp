#include "bits/stdc++.h"
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x);
#endif
     
const char sp = ' ';
const char nl = '\n';
#define int long long 
class test_case {
private:
	int n;
	vector<int> fire, frost;
	int ans = 0;	
public:
 
	void input() {
		cin >> n;
		int temp;
		vector<pair<int, int>> indexes;
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			indexes.push_back(make_pair(temp, 0));
		}
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			indexes[i].second = temp;
		}
		for(int i = 0; i < n; ++i) {
			if(indexes[i].first == 1) {
				frost.push_back(indexes[i].second);
			}
			else {
				fire.push_back(indexes[i].second);
			}
		}
		sort(fire.begin(), fire.end());
		sort(frost.begin(), frost.end());
	}
	void solve() {
		if(fire.size() == 0 or frost.size() == 0) {
			for(auto i : fire) {
				ans += i;
			}
			for(auto i : frost) {
				ans += i;
			}
			return ;
		}
		if(fire.size() == frost.size()) {
			if(fire[0] > frost[0]) {
				ans += (frost[0] + 2 * fire[0]);
			}
			else {
				ans += (2 * frost[0] + fire[0]);
			}
			for(int i = 1; i < fire.size(); ++i){
				ans += 2 * (fire[i] + frost[i]);
			}
			return ;
		}
		// assuming frost size largest
		if(fire.size() > frost.size()) {
			frost.swap(fire);
		}

		for(auto i : fire) {
			ans += (2 * i);
		}
		for(int i = (frost.size() - 1); i >= 0; i--) {
			if(i > fire.size()) {
				ans += (2 * frost[i]);
			}
			else {
				ans += (frost[i]);
			}
		}

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
     
int32_t main() {
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
