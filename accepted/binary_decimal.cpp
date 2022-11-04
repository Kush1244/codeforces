#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
float eps = 0.00000000000000001; //to compare two floating point numbers 'a' and 'b' fabs(a - b) < e;
float maxm_abs = 1e17;
const float PI = 3.1415926;
const float EXP = 2.718281;
ll modulo_prime = 1e9 + 7;
char nl = '\n';
char sp = ' ';
#define read(r) cin >> r;
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
int main() {
	init();
    /* Code starts from here */
	int tc; read(tc);
	while(tc--) {
		long long n; read(n);
		ll ans = 0;
		int maxm = n_infinity;
		while(n > 0) {
			if(n % 10 > maxm) {
				maxm = n % 10;
			}
			n /= 10;
		}
		cout << maxm << nl;
	}
    return 0;
}