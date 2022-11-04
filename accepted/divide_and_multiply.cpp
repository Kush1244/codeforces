#include "bits/stdc++.h"

#ifndef ONLINE_JUDGE
#include "../debug.h"
#else 
#define debug(x);
#endif

using namespace std;

const char sp = ' ';
const char nl = '\n';
typedef long long ll;
class test_case {
private:
	ll n;
	vector<ll> arr;
	ll ans = 0;
public:
	void input() {
		cin >> n;
		ll buff;
		for(ll i = 0; i < n; ++i) {
			cin >> buff;
			arr.push_back(buff);
		}	
	}
 
	void solve() {
		ll total_power = 0;
		for(ll i = 0; i < n; ++i) {
			if(arr[i] & 1) {
				continue;
			}
			else {
				while(true) {
					if(arr[i] & 1 == true) {
						break;
					}
					arr[i] = arr[i] / 2;
					total_power++;
				}
			}
		}
		sort(arr.begin(), arr.end());
		for(int i = 0; i < n - 1; ++i) {
			ans += arr[i];
		}
		ans = ans + (arr[n - 1] << total_power);
	}
	void output() {
		cout << ans << nl;	
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
	#endif // OPNLINE_JUDGE	
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