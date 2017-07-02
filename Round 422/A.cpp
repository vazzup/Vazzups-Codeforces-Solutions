#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

#define ll unsigned long long int
#define pll pair<long long, long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define getchar_unlocked getchar
#define F first
#define S second
#define MOD 1000000007

using namespace std;

ll fact(ll a) {
	if(a <= 1) {
		return 1;
	} else {
		return a * fact(a - 1);
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll a, b;
	cin >> a >> b;
	cout << fact(min(a, b)) << "\n";
	return 0;
}
