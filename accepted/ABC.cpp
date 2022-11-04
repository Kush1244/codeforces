#include "bits/stdc++.h"
using namespace std;
using ll = long long;

#define sort_ascending(v) sort(v.begin(), v.end());
#define sort_descending(v) sort(v.begin(), v.end(), greater<ll>());
#define rep(i, a, b, c) for(int i = a; i < b; i += c)
#define rep_range(i, v) for(auto i : v)

const ll p_infintiy = INT64_MAX;
const ll n_infinity = INT64_MIN;
const float eps = 0.00000000000000001; //to compare two floating point numbers 'a' and 'b' fabs(a - b) < e;
const float maxm_abs = 1e17;
const float PI = 3.1415926;
const float EXP = 2.718281;
const ll modulo_prime = 1e9 + 7;
const char nl = '\n';
const char sp = ' ';

class test_case {
private:
	int p;
	int m = 0, n = 0;

public:

	void input() {
		cin >> p;
		char temp;
		rep(i, 0, p, 1) {
			cin >> temp;
			if(temp == '1') {
				m++;
			} else {
				n++;
			}
		}
	}

	void solve() {
		if((m == 0 && n == 1) || (n == 0 && m == 1)) {
			cout << "YES" << nl;
			return ;
		}
		if(m == n && n == 1) {
			cout << "YES" << nl;
			return ;
		}
		cout << "NO" << nl;
	}

};


void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	init();
    /* Code starts from here */
    int tc; cin >> tc;
    while(tc--) {
    	test_case T;
    	T.input();
    	T.solve();
    }
    return 0;
}