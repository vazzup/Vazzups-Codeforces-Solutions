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

ll nCr(ll n, ll r);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	int len = s1.size();
	int countp = 0, countm = 0;
	for(int i=0; i<len; i++) {
		if(s1[i] == '+') {
			countp++;
		} else {
			countm++;
		}
	}
	int countp2 = 0, countm2 = 0;
	for(int i=0; i<len; i++) {
		if(s2[i] == '+') {
			countp2++;
		} else if(s2[i] == '-') {
			countm2++;
		}
	}
	if(countp2 + countm2 == len) {
		if(countp2 == countp) {
			cout << "1\n";
		} else {
			cout << "0\n";
		}
		return 0;
	}
	ll possibilities = nCr(len - (countm2 + countp2), max(countp - countp2, countm - countm2));
	cout << possibilities / pow(2, (len - (countm2 + countp2))) << "\n";
	return 0;
}

ll nCr(ll n, ll r) {
	if(r < 0 || r > n) {
		return 0LL;
	} else if(r == n || r == 0) {
		return 1LL;
	}
	return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
