#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;
#define MAX 2000001

using namespace std;

typedef long long ll;

bool isPrime[MAX];
bool buscado[MAX];

int main()
{
	for (ll i = 0; i < MAX; i++)
	{
		isPrime[i] = true;
		buscado[i] = false;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for (ll i = 2; i * i <= MAX; i++)
	{
		if (isPrime[i])
		{
			for (ll j = i; j <= (MAX / i); j++)
			{
				isPrime[i * j] = false;
			}
		}
	}
	ll n, m;

	cin >> n;
	map<ll, ll> cant;
	map<ll, ll> cantidad;
	for (ll i = 0; i < n; i++)
	{
		ll a;
		cin >> a;
		cant[a]++;
	}
	cin >> m;
	for (ll i = 0; i < m; i++)
	{
		ll a, b;
		cin >> a >> b;
		ll answer = 0;
		for (ll i = min(a, (ll)(MAX - 1)); i <= min(b, (ll)(MAX - 1)); i++)
		{
			if (isPrime[i])
			{
				if (!buscado[i])
				{
					for (auto it = cant.begin(); it != cant.end(); it++)
					{
						if (it->first % i == 0)
						{
							cantidad[i] += it->second;
						}
					}
					buscado[i] = true;
				}
				answer += cantidad[i];
			}
		}
		cout << answer << endl;
	}

	return 0;
}