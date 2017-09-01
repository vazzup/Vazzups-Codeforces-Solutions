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
	int n, m;
	cin >> n >> m;
	int a[n][m];
	int b[n], c[m];
	ll ans = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	// Count sets in row
	for(int i=0; i<n; i++) {
		b[i] = 0;
		for(int j=0; j<m; j++) {
			b[i] += a[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		ans += pow(2, b[i]);
		ans += pow(2, m - b[i]);
		ans-=2;
	}
	// Count sets in columns
	for(int i=0; i<m; i++) {
		c[i] = 0;
		for(int j=0; j<n; j++) {
			c[i] += a[j][i];
		}
	}
	for(int i=0; i<m; i++) {
		ans += pow(2, c[i]);
		ans += pow(2, n - c[i]);
		ans-=2;
	}
	ans -= n*m;
	cout << ans << "\n";
	return 0;
}
