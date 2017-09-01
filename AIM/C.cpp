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
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
	int n;
	cin >> n;
	vector <ll> v, vd;
	vector <bool> visited;
	for(int i=0; i<n; i++) {
		ll a;
		cin >> a;
		v.pb(a);
		vd.pb(a);
		visited.pb(false);
	}
	sort(vd.begin(), vd.end());
	vector < vector<ll> > xd;
	for(int i=0; i<n; i++) {
		if(!visited[i]) {
			vector <ll> temp;
			visited[i] = true;
			temp.pb(i + 1);
			int pos = lower_bound(vd.begin(), vd.end(), v[i]) - vd.begin();
			while(!visited[pos]) {
				visited[pos] = true;
				temp.pb(pos + 1);
				pos = lower_bound(vd.begin(), vd.end(), v[pos]) - vd.begin();
			}
			xd.pb(temp);
		}
	}
	cout  << xd.size() << "\n";
	for(int i=0; i<xd.size(); i++) {
		cout << xd[i].size() << " ";
		for(int j=0; j<xd[i].size(); j++) {
			cout << xd[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
