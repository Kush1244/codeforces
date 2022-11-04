#include <bits/stdc++.h>
using namespace std;
#define show_name(x) cerr << #x << " = ";

// for debugging int, float, char, string, long long, 
void print(auto x) {
	cerr << x << endl;
}
void print(pair<auto, auto> x) {
	cerr << "{" << x.first << ", " << x.second << "}";
}
void debug(auto x) {
	show_name(x);
	print(x);
}

template<class T>
void debug(vector<T> x) {

}


int main() {
	pair<int, char> a = {23, '!'};
	debug(a);
}




























