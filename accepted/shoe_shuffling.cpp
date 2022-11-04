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
	map<int , int> shoes;
	bool ans_exist = 0;
	vector<int> sol;
public:

	void input() {
		cin >> n;
		int buff;
		for(int i = 0; i < n; ++i) {
			cin >> buff;
			if(shoes.find(buff) == shoes.end()) {
				// add the element
				shoes.insert({buff, 1});
			}
			else {
				shoes[buff]++;
			}
		}

	}
	
	void solve() {

		int total_added = 0;
		for(auto i : shoes) {
			if(i.second == 1) {
				return ;
			}
			sol.push_back(i.second + total_added);
			for(int j = total_added + 1; j < i.second + total_added; ++j) {
				sol.push_back(j);
			}
			total_added += i.second;
		}
		ans_exist = true;
	}
	void output() {
		if(ans_exist == false) {
			cout << -1 << nl;
		}
		else {
			for(auto i : sol) {
				cout << i << sp;
			}
			cout << nl;
		}
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
