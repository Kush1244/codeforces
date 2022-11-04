#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
float eps = 0.00000000000000001; //to compare two floating point numbers 'a' and 'b' fabs(a - b) < e;
float maxm_abs = 1e17;
const float PI = 3.1415926;
const float EXP = 2.718281;
ll modulo_prime = 1e9 + 7;
char nl = '\n';
#define sort_ascending(v) sort(v.begin(), v.end());
#define sort_descending(v) sort(v.begin(), v.end(), greater<ll>());
const ll p_infintiy = INT64_MAX;
const ll n_infinity = INT64_MIN;
void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

struct test_case {
	int n;
	vector<bool> arr;
	test_case() {
		cin >> n;
		for(int i = 0; i < n; ++i) {
			int temp; cin >> temp;
			arr.push_back(temp);
		}
	}
};

void solve(test_case& T) {
	int ans = int(T.arr[0]);
	for(int i = 1; i < T.n; ++i) {
		bool current = T.arr[i - 1], now = T.arr[i];
		if(current == false && now == false) {
			// plant dies
			cout << -1 << nl;
			return ;
		}
		if(current == true && now == true) {
			ans += 5;
			continue;
		}
		ans += int(now);
	}
	cout << ans + 1<< nl;
}

int main() {
	init();
    /* Code starts from here */
	int tc; cin >> tc;
	while(tc--) {
		test_case T;
		solve(T);
	}
    return 0;
}

// accepted
