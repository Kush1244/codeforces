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
	int a, b;
	vvi arr;
public:
	void input() {
		cin >> a >> b;
		char temp;
		rep(i, 0, a, 1) {
			
		}
	}
	void solve();
	
};
void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

void solve_grid(int& x_grid, int& y_grid, int& answer) {
	// the conditon that we don't want to look for
	if(x_grid < 0 || y_grid < 0) {
		return 
		// invalid 
	}
	// base case
	// when the recurrsion stops
	if(x_grid == 0 || y_grid == 0) {
		// we have reach the end of the grid
		answer++;
	} 
	// otherwise we can move down or right

	// Going downwards
	solve_grid(x_grid - 1, y_grid, answer + 1);
	// changing grid to original size since it is passed by reference
	x_grid++;
	// Going rightwards
	solve_grid(x_grid, y_grid - 1, answer + 1);
	// changing grid to original size since it is passed by refrence
	y_grid++;
	// solution is done 
	// But this is not a fast solution

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