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
	string s;
	int k;
	cin >> s >> k;
	set <char> st; 
	for(int i=0; i<s.size(); i++) {
		st.insert(s[i]);
	}
	if(s.size() < k) {
		cout << "impossible\n";
	} else {
		cout <<  max((ll)0, (ll)k - (ll)st.size()) << "\n";
	}
	return 0;
}
