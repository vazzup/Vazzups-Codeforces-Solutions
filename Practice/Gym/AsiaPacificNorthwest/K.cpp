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
	vector <ll> one, two;
	for(int i=0; i<6; i++) {
		ll a;
		cin >> a;
		one.pb(a);
	}
	ll same_pair = 0, greater_pair = 0;
	for(int i=0; i<6; i++) {
		ll a;
		cin >> a;
		two.pb(a);
	}
	double tot_pair =  36;
	for(int i=0; i<6; i++) {
		for(int j=0; j<6; j++) {
			if(one[i] == two[j]) {
				same_pair++;
			} else if(one[i] > two[j]) {
				greater_pair++;
			}
		}
	}
	double ans = 0;
	double extra = 1;
	for(int i = 0; i < 100000; i++) {
		ans += extra * (greater_pair / tot_pair);
		extra *= (same_pair / tot_pair);
	}
	printf("%.5lf\n", ans);
	return 0;
}
