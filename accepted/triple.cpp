#include "bits/stdc++.h"
using namespace std;
const char sp = ' ';
const char nl = '\n';


int main() {
		ios::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
		#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
		#endif
		map<int ,int> temp;
		int tc; cin >> tc;
		while(tc--) {
			int n; cin >> n;
			map<int, int> mp;
			int current;
			bool achieved = false;
			for(int i = 0; i < n; ++i) {
				cin >> current;
				if(mp.find(current) != mp.end()) {
					mp[current]++;
					if(mp[current] >= 3) {
						cout << current << nl;
						achieved = true;
						i++;
						for(i; i < n; ++i) {
								cin >> current;
						}
						break;
					}
				} else {
					mp.insert({current, 1});
				}
			}
			if(achieved == false) {
				cout << -1 << nl;
			}		
		}
		return 0;
}
