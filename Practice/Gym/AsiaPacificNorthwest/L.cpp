#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

#define ll long long int
#define pll pair<long long, long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define getchar_unlocked getchar
#define F first
#define S second
#define MOD 1000000007

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll area = 0;
	ll l, h;
	for(int i=0; i<3; i++) {
		cin >> l >> h;
		area += l*h;
	}
	if(pow((ll)(sqrt(area)), 2) == area) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}
