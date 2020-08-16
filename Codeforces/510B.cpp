#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

const ll MX = 51;

ll n, m;
bool isCiclo = false;
struct Graph
{
	bool isVis[MX][MX] = {false};
	string mat[MX];
	void dfs(ll u, ll v, ll prevu, ll prevv)
	{
		isVis[u][v] = true;
		if (u > 0)
		{
			if (prevu != (u - 1) || prevv != (v))
			{
				if (mat[u][v] == mat[u - 1][v])
				{

					if (isVis[u - 1][v])
					{
						isCiclo = true;
					}
					else
					{
						dfs(u - 1, v, u, v);
					}
				}
			}
		}
		if (u < n - 1)
		{
			if (prevu != (u + 1) || prevv != (v))
			{
				if (mat[u][v] == mat[u + 1][v])
				{

					if (isVis[u + 1][v])
					{
						isCiclo = true;
					}
					else
					{
						dfs(u + 1, v, u, v);
					}
				}
			}
		}
		if (v > 0)
		{
			if (prevu != (u) || prevv != (v - 1))
			{
				if (mat[u][v] == mat[u][v - 1])
				{
					if (isVis[u][v - 1])
					{
						isCiclo = true;
					}
					else
					{
						dfs(u, v - 1, u, v);
					}
				}
			}
		}
		if (v < m - 1)
		{
			if (prevu != (u) || prevv != (v + 1))
			{
				if (mat[u][v] == mat[u][v + 1])
				{
					if (isVis[u][v + 1])
					{
						isCiclo = true;
					}
					else
					{
						dfs(u, v + 1, u, v);
					}
				}
			}
		}
	}
};

Graph G;

int main()
{

	cin >> n >> m;
	for (ll i = 0; i < n; i++)
	{
		string aux;
		cin >> aux;
		G.mat[i] = aux;
	}
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if (!G.isVis[i][j])
				G.dfs(i, j, -1, -1);
		}
	}
	if (isCiclo)
	{

		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}