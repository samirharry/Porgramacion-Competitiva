#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
const ll MX = 1e5;

bool ciclo = false;
struct Graph
{
	vector<ll> adj[MX];
	map<ll, bool> added[MX];
	bool vis[MX] = {false};
	void addEdge(ll u, ll v)
	{
		if (u == v)
		{
			ciclo = true;
		}
		else if (added[u][v])
		{
			ciclo = true;
		}
		else
		{

			added[u][v] = added[v][u] = true;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}

	void dfs(ll u, ll p = -1)
	{
		vis[u] = true;
		for (ll v : adj[u])
		{
			if (v == p)
				continue;
			if (!vis[v])
			{
				dfs(v, u);
			}
			else
			{
				ciclo = true;
			}
		}
	}
};

Graph G;

int main()
{
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < m; i++)
	{
		ll u, v;
		cin >> u >> v;
		G.addEdge(u, v);
	}
	for (ll i = 1; i <= n; i++)
	{
		if (!G.vis[i])
		{
			G.dfs(i);
		}
	}
	if (((n - 1) == m) && (!ciclo))
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}