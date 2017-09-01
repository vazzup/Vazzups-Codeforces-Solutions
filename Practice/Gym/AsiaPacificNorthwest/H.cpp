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
	char c, a[n][m];
	for(int i=0; i<n; i++) {
		for(int j=0; j < m; j++) {
			scanf("%c", &c);
			while(c == ' ' || c == '\n' || c == '\t')
				scanf("%c", &c);
			a[i][j]  = c;
		}
	}
	bool visited[n][m] = {{0}};
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(!visited[i][j]) {

			}
		}
	}
	return 0;
}
