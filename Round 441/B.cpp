#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
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
	ll n, k, mod;
	cin >> n >> k >> mod;
	map <ll, ll> m;
	vector <ll> v(n);
	for(ll i=0; i<n; i++) {
		cin >> v[i];
		m[v[i] % mod]++;
	}
	int md_val = -1;
	for(map <ll, ll> :: iterator it = m.begin(); it != m.end(); it++) {
		if((it -> S) >= k) {
			md_val = it -> F;
			break;
		}
	}
	if(md_val == -1) {
		cout << "No\n";
		return 0;
	}
	cout << "Yes\n";
	for(ll i=0; k && i<n; i++) {
		if(v[i] % mod == md_val) {
			cout << v[i] << " ";
			k--;
		}
	}
	cout << "\n";
	return 0;
}
