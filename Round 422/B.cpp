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
	string s, t;
	cin >> n >> m >> s >> t;
	ll mnc = 1e14;
	ll curr = 0;
	vector <int> mni;
	for(int i = 0; i + n - 1 < m; i++) {
		curr = 0;
		vector <int> indexes;
		int k = i;
		for(int j = 0; j < n; j++, k++) {
			if(s[j] !=  t[k]) {
				curr++;
				indexes.pb(j);
			}
		}
		if(curr < mnc) {
			mnc = curr;
			mni = indexes;
		}
	}
	cout << mnc << "\n";
	for(int i=0; i<mni.size(); i++) {
		cout << mni[i] + 1 << " ";
	}
	cout << "\n";
	return 0;
}
