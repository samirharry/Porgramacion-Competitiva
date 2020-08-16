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
		ll n;
		cin >> n;
		string cadena;
		cin >> cadena;
		for (ll i = 0; i < n; i++)
		{
			ll cant = 0;
			for (ll j = i + 1; j < n; j++)
			{
				if (cadena[i] == cadena[j])
				{
					cant++;
				}
				else
				{
					break;
				}
			}
		}
	}
	return 0;
}