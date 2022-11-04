#include "bits/stdc++.h"
using namespace std;
using ll = long long;

#define read(r) cin >> r;
#define r2(a, b) cin >> a >> b;
#define r3(a, b, c) cin >> a >> b >> c;
#define sort_ascending(v) sort(v.begin(), v.end());
#define sort_descending(v) sort(v.begin(), v.end(), greater<ll>());

// shorthand for common data types
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define pb push_back

const ll p_infintiy = INT64_MAX;
const ll n_infinity = INT64_MIN;
const float eps = 0.00000000000000001; //to compare two floating point numbers 'a' and 'b' fabs(a - b) < e;
const float maxm_abs = 1e17;
const float PI = 3.1415926;
const float EXP = 2.718281;
const ll modulo_prime = 1e9 + 7;
const char nl = '\n';
const char sp = ' ';

struct test_case {
	int p, q;
	vector<int> temp;
	test_case() {
		cin >> p >> q;
		int x;
		for(int i = 0; i < q; ++i) {
			cin >> x;
			temp.push_back(x);
		}
	}

	~test_case() {
		cout << p << sp << q << nl;
		for(int i = 0; i < q; ++i) {
			cout << temp[i] << sp;
		}
		cout << nl;
	}
};

void solve(test_case& t) {
	
}

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}



int main() {
	init();
    /* Code starts from here */
	int tc; cin >> tc;
	while(tc--) {
		test_case t;
		solve(t);
	}
    return 0;
}