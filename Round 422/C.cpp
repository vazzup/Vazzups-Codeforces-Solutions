#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
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
	ll n, x;
	cin >> n >> x;
	vector < pair <pair <ll, ll>, ll> > v;
	unordered_map <ll, vector < pair<ll, ll> > > m;
	unordered_map <ll, vector<ll> > _mp;
	unordered_map <ll, bool> visited;
	vector < ll > z;
	
	for(int i=0; i<n; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		v.pb(mp(mp(a, b - a + 1), c));
		m[b - a + 1].pb(mp(a, c));
		z.pb(b - a + 1);
	}
	for(int i=0; i<z.size(); i++) {
		if(!visited[z[i]]) {
			sort(m[z[i]].begin(), m[z[i]].end());
			visited[z[i]] = true;
			ll mn = 1e14;
			for(int j=0; j<m[z[i]].size(); j++) {
				mn = min(m[z[i]][j].S, mn);
				_mp[z[i]].pb(mn);
			}
		}
	}
	ll mcost = 1e14;
	for(int i=0; i < n; i++) {
		ll days_left = x - v[i].F.S;
		int low = 0, high = ((int)(m[days_left].size())) - 1;
		int index = -1;
		ll mncost = 1e14;
		while(low <= high) {
			int mid = (low + high) / 2;
			if(m[days_left][mid].F + days_left - 1 < v[i].F.F) {
				index = mid;
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		if(index == -1) continue;
		mncost = _mp[days_left][index] + v[i].S;
		mcost = min(mcost, mncost);
	}
	if(mcost == 1e14) {
		cout << "-1\n";
	} else {
		cout << mcost << "\n";
	}
	return 0;
}
