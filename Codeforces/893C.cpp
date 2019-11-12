#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

const ll MX = 100001;

struct Graph
{
	vector<ll> adj[MX];

	ll res[MX] = {10000000001};
	bool vis[MX] = {false};

	void addEdge(ll u, ll v)
	{
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	ll minSolvedfs(ll u)
	{
		vis[u] = true;
		ll minimo = res[u];
		for (ll v : adj[u])
		{

			if (!vis[v])
			{
				ll costo = minSolvedfs(v);
				minimo = min(costo, minimo);
			}
		}
		return minimo;
	}
};
Graph G;

int main()
{
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
	{
		cin >> G.res[i + 1];
	}

	for (ll i = 0; i < m; i++)
	{
		ll u, v;
		cin >> u >> v;
		G.addEdge(u, v);
	}
	ll answer = 0;
	for (ll i = 1; i <= n; i++)
	{
		if (!G.vis[i])
		{
			answer += G.minSolvedfs(i);
		}
	}
	cout << answer << endl;
	return 0;
}