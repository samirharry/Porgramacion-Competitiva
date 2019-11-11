#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

ll n, a, b;
deque<pair<ll, ll>> solutions;
bool isSolution = false;

void solve(ll level, ll auxil)
{
	if (level == 0)
	{
		isSolution = true;
		return;
	}
	else if (level < a)
		return;
	for (ll aux = min(level,auxil); aux >= a; aux--)
	{
		ll cant = n / aux;
		while (cant > 0)
		{
			solutions.push_front(make_pair(aux, cant));
			ll mod = n - aux * cant;
			n = min(mod,n);
			solve(n,aux-1);
			if (isSolution)
			{
				break;
			}
			solutions.pop_front();
			n = cant * aux + mod;
			cant--;
		}
		if (isSolution)
		{
			break;
		}
	}
	return;
}

int main()
{
	cin >> n >> a >> b;
	solve(b,n);
	if (isSolution)
	{
		cout << "YES" << endl;
		while (!solutions.empty())
		{
			pair<ll, ll> auxil = solutions.front();
			for (ll i = 0; i < auxil.second; i++)
				cout << auxil.first << " ";
			solutions.pop_front();
		}
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}