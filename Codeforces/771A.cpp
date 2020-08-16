#include <bits/stdc++.h>

#define debug(x) cout << #x << " => " << x << endl
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
	cout << #x << "[" << i << "] => " << x[i] << endl
#define MAX 150001

using namespace std;

typedef long long ll;

struct Graph
{
	bool isVisited[MAX] = {false};
	vector<ll> friends[MAX];
	ll cntVertices = 0;
	ll cntAristas = 0;
	void addEdge(ll m, ll n)
	{
		friends[m].push_back(n);
		friends[n].push_back(m);
	}

	void dfs(ll cur)
	{
		cntVertices++;
		isVisited[cur] = true;
		for (ll i = 0; i < friends[cur].size(); i++)
		{
			cntAristas++;
			if (!isVisited[friends[cur][i]])
			{
				dfs(friends[cur][i]);
			}
		}
		return;
	}
};

Graph G;

int main()
{
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < m; i++)
	{
		ll a, b;
		cin >> a >> b;
		G.addEdge(a, b);
	}
	bool answer = true;
	for (ll i = 1; i <= n; i++)
	{
		if (!G.isVisited[i])
		{
			G.cntAristas = 0;
			G.cntVertices = 0;
			G.dfs(i);

			if (G.cntAristas/2 != (G.cntVertices * (G.cntVertices - 1)) / 2)
			{
				answer = false;
				break;
			}
		}
	}
	answer ? cout << "YES" : cout << "NO";
	return 0;
}