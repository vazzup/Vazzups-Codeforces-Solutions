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
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int total = 0;
	n--;
	if(n > 0)
	total += min(a, b);
	n--;
	if(n > 0)
	total += n * min(min(a, b), c);
	cout << total << "\n";
	return 0;
}
