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

ll modpow(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if(b & 1) {
			ans *= a;
			if(ans > MOD) {
				ans %= MOD;
			}
		}
		a *= a;
		if(a > MOD) {
			a %= MOD;
		}
		b >>= 1;
	}
	return ans;
}

vector <ll> v(10000000, 0);

void precompute() {
	v[0] = 0;
	v[1] = 0;
	v[2] = 1;
	v[3] = 3;
	for(ll i=4; i<10000000; i++) {
		ll x, y;
		x = i/2;
		y = 0;
		if(i%2 == 1) {
			x -= 1;
			y = 1;
		}
		v[i] = v[x + y] + (x + 3*y);
		if(v[i] > MOD) v[i] %= MOD;
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t, l, r;
	cin >> t >> l >> r;
	precompute();
	ll sum = 0;
	ll t_ = 1;
	for(ll i=l; i<=r; i++) {
		sum += t_ * v[i];
		if(sum > MOD) {
			sum %= MOD;
		}
		t_ *= t;
		if(t_ > MOD) {
			t_ %= MOD;
		}
	}
	cout << sum << "\n";
	/*
	for(int i=0; i<10; i++) {
		cout << v[i] << " ";
	}
	cout << "\n";*/
	return 0;
}
