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
		ll n, x, a, b;
		cin >> n >> x >> a >> b;
		ll auxA = a, auxB = b;
		a = min(auxA, auxB);
		b = max(auxA, auxB);
		ll movesA = a - 1;
		ll movesB = n - b;
		if (movesA <= x)
		{
			a = 1;
			x = x - movesA;
		}
		else
		{
			a = a - x;
			x = 0;
		}
		if (movesB <= x)
		{
			b = n;
			x = x - movesB;
		}
		else
		{
			b = b + x;
			x = 0;
		}
		cout << abs(b - a) << endl;
	}

	return 0;
}