#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
    #include "debug.h"
#else 
    #define debug(x) 42
#endif 
using namespace std;
const char sp = ' ';
const char nl = '\n';

class test_case {
private:
    int n;
    vector<int> v;
public:
    test_case() {
        input();
        solve();
        output();
    }
    void input() {
        cin >> n;
        v.reserve(n);
        int temp;
        for(int i = 0; i < n; ++i) {
            cin >> temp;
            v.push_back(temp);
        }
    }

    void solve() {
        int ans = INT32_MIN;
        for(auto i : v) {
            ans = max(i, ans);
        }
        n = ans;
    }

    void output() {
        cout << n << nl; 
    }
};


int main() {
    #ifndef ONLINE_JUDGE
    INITME();
    #endif
    int tc = 0;
     cin >> tc;
    while(tc--) {
        test_case t;
    }
}