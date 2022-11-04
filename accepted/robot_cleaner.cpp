#include <bits/stdc++.h>
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
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 
    /* Code starts from here */
    int tc; cin >> tc;
    while(tc--) {
    	int n, m , rb, cb, rd, cd;
    	cin >> n >> m >> rb >> cb >> rd >> cd; // inputting the test case

    	// n and m for the size of the grid
    	// rb and cb for the initial positions
    	// rd and cd for the locaiton of the dirt


    	int dr = 1, dc = 1; // amount to move after each turn
    	int ans = 0; // time required
    	while(1) {

    		if(rb == rd || cb == cd) {
    			break; // we have clean the dirt
    		}


    		if(rb + dr > n || rb + dr < 1) { // we have reached the vertical wall
    			dr *= -1;
    		}

    		if(cb + dc > m || cb + dc < 1 ) { // we have reached the horizontal wall
    			dc *= -1;
    		}
    		rb += dr;
    		cb += dc;
    		ans++;

    	}
    	cout << ans << nl;
    }
    return 0;
}