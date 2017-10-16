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

ll find_root(ll a, vector <ll> &root);
void join_nodes(ll a, ll b, vector <ll> &root, vector <ll> &size);
ll get_size(ll a, vector <ll> &size, vector <ll> &root);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	vector <ll> root(n), size(n);
	vector <bool> init(n);
	for(ll i=0; i<n; i++) {
		root[i] = i;
		size[i] = 0;
	}
	cout << "1 ";
	vector <ll> p(n);
	for(ll i=0; i<n; i++) {
		cin >> p[i];
		p[i]--;
		init[p[i]] = true;
		size[p[i]] = 1;
		if(p[i] - 1 >= 0 && init[p[i] - 1]) {
			join_nodes(p[i] - 1, p[i], root, size);
		}
		if(p[i] + 1 < n && init[p[i] + 1]) {
			join_nodes(p[i] + 1, p[i], root, size);
		}
		ll sz = get_size(n - 1, size, root);
		cout << i + 2 - sz << " ";
	}
	cout << "\n";
	return 0;
}

ll find_root(ll a, vector <ll> &root) {
	while(root[a] != a) {
		root[a] = root[root[a]];
		a = root[a];
	}
	return a;
}

void join_nodes(ll a, ll b, vector <ll> &root, vector <ll> &size) {
	ll root_a = find_root(a, root);
	ll root_b = find_root(b, root);
	if(root_a == root_b) return;
	root[root_b] = root_a;
	size[root_a] += size[root_b];
}

ll get_size(ll a, vector <ll> &size, vector <ll> &root) {
	return size[find_root(a, root)];
}
