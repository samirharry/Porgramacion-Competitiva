#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << "] => " << x[i] << endl;

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
		ll answer = 0;
		ll arr[n + 1] = {0};
		ll arrAux[n + 1] = {0};
		ll cant[n + 1] = {0};
		cant[0] = 1;
		for (ll i = 1; i < n; i++)
		{
			ll num = arrAux[i - 1];
			if (arr[num] == 0)
			{
				arrAux[i] = 0;
				arr[num] = i;
			}
			else
			{
				arrAux[i] = i - arr[num];
				arr[num] = i;
			}
			cant[arrAux[i]]++;
		}
		
		cout << cant[arrAux[n - 1]] << endl;
	}
	return 0;
}