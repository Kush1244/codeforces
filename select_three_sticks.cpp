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
	vector<int> lengths;
	int ans = 0;
public:
	void input() {
		cin >> n;
		lengths.reserve(n);
		int temp;
		for(int i = 0; i < n; ++i) {
			cin >> temp;
			lengths.push_back(temp);
		}
	}

	void solve() {
		// sorting the array
		sort(lengths.begin(), lengths.end());
		debug(lengths);
		int req_length = lengths[0];
		int sticks_modified = 0;
		for(int i = 1; i < n and sticks_modified < 3; ++i) {

		}
		ans = sticks_modified;
	}
	
	void output() {

	}

    test_case() {
        input(); solve(); output();
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