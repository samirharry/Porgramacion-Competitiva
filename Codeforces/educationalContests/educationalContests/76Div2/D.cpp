#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, m;
		cin >> n;
		vector<ll> monster;
		ll maximo[n + 1];
		for (ll i = 0; i < n; i++)
		{
			ll aux;
			cin >> aux;
			monster.push_back(aux);
		}
		cin >> m;
		vector<pair<ll, ll>> heroes;
		for (ll i = 0; i < m; i++)
		{
			ll au, bu;
			cin >> au >> bu;
			heroes.push_back(make_pair(au, bu));
		}
		ll lastKill = -1;
		ll days = 0;
		while (lastKill < n)
		{
			for (ll i = 0; i < m; i++)
			{
				ll maxInd = lastKill + 1;
				auto it = lower_bound(monster.begin() + (maxInd), monster.begin() + (maxInd + 1) +);
			}
			lastKill = min(lastKill, n);
			days++;
		}
	}
	return 0;
}