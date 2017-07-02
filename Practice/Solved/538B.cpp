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
	ll n;
	cin >> n;
	vector <ll> digits;
	ll temp = n;
	while(temp) {
		digits.pb(temp % 10);
		temp /= 10;
	}
	reverse(digits.begin(), digits.end());
	ll num_digits = digits.size();
	vector <ll> nums;
	for(int i = 0; i < num_digits; i++) {
		int j;
		for(j = 0; j < min(digits[i], (ll)nums.size()); j++) {
			nums[j] += ((ll)pow(10, num_digits - i - 1));
		}
		while(j < digits[i]) {
			nums.pb((ll)pow(10, num_digits - i - 1));
			j++;
		}
	}
	sort(nums.begin(), nums.end());
	cout << nums.size() << "\n";
	for(int i=0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	cout << "\n";
	return 0;
}
