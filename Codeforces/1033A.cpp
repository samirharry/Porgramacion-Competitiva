#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

const ll MX = 1000 + 1;

ll n, ax, ay, bx, by, cx, cy;
bool isAnswer = false;
struct Graph
{
	bool isVis[MX][MX] = {false};
	bool isBloq[MX][MX] = {false};
	void bloquear(ll u, ll v)
	{
		for (ll i = 0; i < MX; i++)
		{
			isBloq[u][i] = true;
			isBloq[i][v] = true;
			if ((u + i < MX) && (v + i < MX))
				isBloq[u + i][v + i] = true;
			if ((u - i >= 0) && (v + i < MX))
				isBloq[u - i][v + i] = true;
			if ((u + i < MX) && (v - i >= 0))
				isBloq[u + i][v - i] = true;
			if ((u - i >= 0) && (v - i >= 0))
				isBloq[u - i][v - i] = true;
		}
	}
	void dfs(ll u, ll v)
	{
		isVis[u][v] = true;
		if (u == cx && v == cy)
		{
			isAnswer = true;
			return;
		}
		if (v < n)
		{
			if (!isVis[u][v + 1] && !isBloq[u][v + 1])
			{
				dfs(u, v + 1);
				if (isAnswer)
					return;
			}
		}
		if (v > 1)
		{
			if (!isVis[u][v - 1] && !isBloq[u][v - 1])
			{
				dfs(u, v - 1);
				if (isAnswer)
					return;
			}
		}
		if (u > 1)
		{
			if (!isVis[u - 1][v] && !isBloq[u - 1][v])
			{
				dfs(u - 1, v);
				if (isAnswer)
					return;
			}
		}
		if (u < n)
		{
			if (!isVis[u + 1][v] && !isBloq[u + 1][v])
			{
				dfs(u + 1, v);
				if (isAnswer)
					return;
			}
		}
		if (u < n && v < n)
		{
			if (!isVis[u + 1][v + 1] && !isBloq[u + 1][v + 1])
			{
				dfs(u + 1, v + 1);
				if (isAnswer)
					return;
			}
		}
		if (u > 1 && v > 1)
		{
			if (!isVis[u - 1][v - 1] && !isBloq[u - 1][v - 1])
			{
				dfs(u - 1, v - 1);
				if (isAnswer)
					return;
			}
		}
		if (u < n && v > 1)
		{
			if (!isVis[u + 1][v - 1] && !isBloq[u + 1][v - 1])
			{
				dfs(u + 1, v - 1);
				if (isAnswer)
					return;
			}
		}
		if (u > 1 && v < n)
		{
			if (!isVis[u - 1][v + 1] && !isBloq[u - 1][v + 1])
			{
				dfs(u - 1, v + 1);
				if (isAnswer)
					return;
			}
		}
	}
};

Graph G;

int main()
{
	cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
	G.bloquear(ax, ay);
	G.dfs(bx, by);
	if (isAnswer)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}