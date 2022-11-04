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
        int x, y; cin >> x >> y; // inputting the test case
        int h = 0, k = 0; // coordinates of C
        if((x + y) % 2 == 1) { // one is odd and other is even
            // this is the only condition when we do not have a solution
            cout << "-1 -1" << nl;
        } else {
            int dist = (x + y) / 2;
            if(x >= y) {
                // max occurs at x coordinate
                cout << dist - y << " " << y << nl;
            } else {
                cout << x << " " << dist - x << nl;
            }

        }
    }
    return 0;
}