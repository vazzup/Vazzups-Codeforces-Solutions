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
	int t;
	cin >> t;
	vector  <ll> v;
	for(int i=0; i<t; i++) {
		ll a;
		cin >> a;
		v.pb(a);
	}
	int length = 1;
	int max_length = 0;
	for(int i=1; i<t; i++) {
		if(v[i] > v[i-1]) {
			length++;
		} else {
			max_length = max(max_length, length);
			length = 1;
		}
	}
	max_length = max(max_length, length);
	cout << max_length << "\n";
	return 0;
}
