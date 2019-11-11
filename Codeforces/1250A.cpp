#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll n, m;
	cin >> n >> m;
	ll arr[n + 1];
	ll posic[n + 1];
	ll minim[n + 1];
	ll maxim[n + 1];
	for (ll i = 1; i <= n; i++)
	{
		arr[i] = i;
		posic[i] = i;
		minim[i] = i;
		maxim[i] = i;
	}
	for (ll i = 0; i < m; i++)
	{
		ll numeroActual;
		cin >> numeroActual;
		ll posicion = posic[numeroActual];
		if (posicion != 1)
		{
			ll numeroPivot = arr[posicion - 1];
			swap(arr[posicion], arr[posicion - 1]);
			posic[numeroActual]--;
			posic[numeroPivot]++;
			minim[numeroPivot] = min(minim[numeroPivot], posic[numeroPivot]);
			maxim[numeroPivot] = max(maxim[numeroPivot], posic[numeroPivot]);
			minim[numeroActual] = min(minim[numeroActual], posic[numeroActual]);
			maxim[numeroActual] = max(maxim[numeroActual], posic[numeroActual]);
		}
	}
	for (ll i = 1; i <= n; i++)
	{
		cout << minim[i] << " " << maxim[i] << endl;
	}
	return 0;
}