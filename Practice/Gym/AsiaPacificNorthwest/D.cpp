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
	ll n, k, r;
	cin >> n >> k >> r;
	vector <ll> v(n, 0);
	vector <ll> dp(n, 0);
	for(int i=0; i<k; i++) {
		ll a;
		cin >> a;
		v[a]++;
	}
	ll count = 0;
	ll ans = 0;
	for(int i=0; i<r; i++) {
		if(v[i] > 0) count++;
	}
	for(ll x: v) {
		cout << x << " ";
	}
	cout << "\n";
	int j;
	for(j=r; j<n; j++) {
		if(count < 1) {
			ans++;
			count++;
			v[j - r]++;
			// cout << "0 at index " << j - 1 << "\n";
		}
		if(count < 2) {
			ans++;
			count++;
			v[j - 1]++;
			// cout << "1 at index " << j - 1 << "\n";
		}
		cout << count << " ";
		count-=((v[j - r] > 0)?1:0);
	}
	cout << count << "\n";
	if(count < 1) {
		ans++;
		count++;
		v[j - r]++;
	}
	if(count < 2) {
		ans++;
		count++;
		v[j - 1]++;
	}
	cout << ans << "\n";
	for(ll x: v) {
		cout << x << " ";
	}
	cout << "\n";
	return 0;
}
