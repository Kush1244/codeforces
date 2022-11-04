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
    int n;
    vector<pair<int, int>> arr;
    int ans = 0;
public:
    void input() {
        cin >> n;
        int j = 0;
        int temp;
        rep(i, 0, n, 1) {
            cin >> temp;
            if(i == 0) {
                arr.push_back(make_pair(temp, 1));
            } else {
                if(arr[j].first == temp) {
                    arr[j].second++;
                } else {
                    arr.push_back(make_pair(temp, 1));
                    j++;
                }
            }
        }
    }
    void solve() {
        // reversing the array
        reverse(arr.begin(), arr.end());
        int current_big = arr[0].first;
        // looping through the array
        rep(i, 0, arr.size(), 1) {
            if(i == 0) {
                // we are at the largest element 
                if(arr[i].second == 1) {
                    ans++;
                    current_big++;
                } else {
                    ans += 2;
                }
            } else {
                if(arr[i].first + 1 == current_big) {
                    ans++;
                } else {
                    if(arr[i].second == 1) {
                        ans++;
                        current_big = arr[i].first + 1;
                        continue;
                    } else {
                        ans += 2;
                    }
                }
                current_big = arr[i].first;
            }
        }
        cout << ans << nl;
    }
};


void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
}

int main() {
    init();
    /* Code starts from here */
    cout << "HELLO" << nl;
}

// accepted