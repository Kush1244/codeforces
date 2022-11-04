#ifndef DEBUG_H
#define DEBUG_H
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

void INITME() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
}



#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
#define debug(x) cerr << #x<<" = "; my_print(x); cerr << endl;
void my_print(ll t) {cerr << t;}
void my_print(int t) {cerr << t;}
void my_print(string t) {cerr << t;}
void my_print(char t) {cerr << t;}
void my_print(lld t) {cerr << t;}
void my_print(double t) {cerr << t;}
void my_print(ull t) {cerr << t;}

template <class T, class V> void my_print(pair <T, V> p);
template <class T> void my_print(vector <T> v);
template <class T> void my_print(set <T> v);
template <class T, class V> void my_print(map <T, V> v);
template <class T> void my_print(multiset <T> v);
template <class T, class V> void my_print(pair <T, V> p) {cerr << "{"; my_print(p.ff); cerr << ","; my_print(p.ss); cerr << "}";}
template <class T> void my_print(vector <T> v) {cerr << "[ "; for (T i : v) {my_print(i); cerr << " ";} cerr << "]";}
template <class T> void my_print(set <T> v) {cerr << "[ "; for (T i : v) {my_print(i); cerr << " ";} cerr << "]";}
template <class T> void my_print(multiset <T> v) {cerr << "[ "; for (T i : v) {my_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void my_print(map <T, V> v) {cerr << "[ "; for (auto i : v) {my_print(i); cerr << " ";} cerr << "]";}
void my_print(pbds v) {cerr << "[ "; for (auto i : v) {my_print(i); cerr << " ";} cerr << "]";}

#endif // DEBUG_H