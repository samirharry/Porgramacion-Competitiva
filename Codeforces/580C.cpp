#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

const ll MX = 100001;
ll answer = 0;
struct Graph
{
	vector<ll> adj[MX];
	bool hasCat[MX] = {false};
	bool isVis[MX] = {false};
	void addEdge(ll u, ll v)
	{
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	void bringCat(ll v)
	{
		hasCat[v] = true;
	}
	void dfs(ll u, ll cats, ll maximCats)
	{
		isVis[u] = true;

		if (hasCat[u])
		{
			cats++;
		}
		else
		{
			cats = 0;
		}
		if (cats > maximCats)
		{
			return;
		}
		if (adj[u].size() == 1 && isVis[adj[u][0]])
		{
			answer++;
		}
		for (ll v : adj[u])

		{
			if (!isVis[v])
			{
				dfs(v, cats, maximCats);
			}
		}
	}
};

Graph G;

int main()
{
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
	{
		ll aux;
		cin >> aux;
		if (aux == 1)
		{
			G.bringCat(i + 1);
		}
	}
	for (ll i = 1; i < n; i++)
	{
		ll u, v;
		cin >> u >> v;
		G.addEdge(u, v);
	}
	G.dfs(1, 0, m);
	cout << answer << endl;
	return 0;
}