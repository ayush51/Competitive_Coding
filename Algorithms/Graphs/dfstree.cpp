#include <bits/stdc++.h>
#define pb emplace_back
#define mp make_pair

using namespace std;

void dfs(std::vector<std::vector<int> >& adj, int u, int p)
{
	cout << u << "\n";
	for (int v : adj[u])
		if (v != p)
			dfs(v);
}

int32_t main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(10);
	vector<vector<int> > adj(n); for (int o = 0; o < n; o++) { int x, y; cin >> x >> y; x--; y--; adj[x].pb(y); adj[y].pb(x); }
	dfs(adj, 0, -1);
}