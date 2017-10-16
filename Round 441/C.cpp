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

ll calc_sum(ll a);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	vector  <ll> ans;
	for(ll i = max(0LL, n-100); i < n; i++) {
		ll sum = calc_sum(i);
		if(sum == n) ans.pb(i);
	}
	cout << (int)ans.size() << "\n";
	for(int x : ans) {
		cout << x << " ";
	}
	cout << "\n";
	return 0;
}

ll calc_sum(ll a) {
	ll sum = a;
	while(a) {
		sum += a % 10;
		a /= 10;
	}
	return sum;
}
