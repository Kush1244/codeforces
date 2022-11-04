#include "bits/stdc++.h"
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x);
#endif
     
const char sp = ' ';
const char nl = '\n';


bool comprator(pair<double, double>& a, pair<double, double>& b) {
	if(a.second < b.second) {
		return true;
	}
	return false;
} 

class test_case {
private:
	int n;
	vector<pair<double, double>> pos_time;
	double ans = 0;
public:
	
	void input() {
		cin >> n;
		pos_time.reserve(n);
		double temp;
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			pos_time.push_back(make_pair(temp, 0));
		}
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			pos_time[i].second = temp;
		}
	}

	void solve() {
		// sorting the data 
		sort(pos_time.begin(), pos_time.end(), comprator);
		auto last = pos_time[n - 1];
		ans = last.first;
		for(int i = 0; i < n - 1; ++i) {
			auto currentPos = pos_time[i].first;
			auto currentTime = pos_time[i].second;
			auto bufferTime = last.second - currentTime;
			auto canReach = 0;
			if(currentPos <= ans) { // current postion lies past of required position
				canReach = currentPos + bufferTime;
				if(canReach < ans) {
					ans = (ans + canReach) / 2;
				}
			}
			else { // current position is ahead of required position
				canReach = currentPos - bufferTime;
				if(canReach > ans) {
					ans = (ans + canReach) / 2;
				}
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
     
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	return 0;
}
