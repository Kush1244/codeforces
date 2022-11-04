#include <bits/stdc++.h>
using namespace std;

void fxn(int a) {
	cout << "address of a is " << &a << endl;
}


int main() {
	int a = 23;
	cout << "address of a is " << &a << endl;
	fxn(a);
}