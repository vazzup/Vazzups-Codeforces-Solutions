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
	int n, k;
	cin >> n >> k;
	vector <ll> t;
	for(int i=0; i<n; i++) {
		ll a;
		cin >> a;
		t.pb(a);
	}
	multiset <ll> ms;
	ll time_ = 0;
	ll penalty = 0;
	for(int i=0; i<k; i++) {
		ms.insert(t[i]);
	}
	int index = k;
	while(!ms.empty()) {
		time_ += *ms.begin();
		ms.erase(ms.begin());
		if(index < n) {
			ms.insert(t[index++]);
		}
		penalty += time_;
	}
	cout << penalty << "\n";
	return 0;
}
