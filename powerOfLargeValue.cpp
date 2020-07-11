/*
* @Author: Jitmanyu Anand
* @Date:   2020-07-11 15:53:49
* @Last Modified by:   Jitmanyu Anand
* @Last Modified time: 2020-07-11 16:30:48
*/
#include <bits/stdc++.h>

using namespace std;

// redefine the value of mod, in case of a difference
#define mod 1000000007

#define int unsigned long long

vector<int> p(1e8 + 1);

int base;

void fillVectorForPower(int n) {

	int b = 2;

	p[0] = 1;

	p[1] = base;

	while (b <= n) {

		int u = p[b / 2] % mod;
		int v = p[b - b / 2] % mod;

		p[b++] = (u * v) % mod;

	}

}

int32_t main() {

	// n is the size of the vector
	// you should initialise it with the maximum exponent you need.

	int n = 1e8;

	// you can define the value for the base here
	base = 2;

	// call the function to fill up the entire vector
	// thereby creating an answer for each possible exponent
	fillVectorForPower(n);

	int exponent = 1e8;

	cout << p[exponent] << endl;

	return 0;
}
