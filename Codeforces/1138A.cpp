#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	ll n;
	cin >> n;
	ll arr[n];
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	ll aux1 = 1, aux2 = 1;
	ll ans = 0;
	bool first = true;
	for (ll i = 1; i < n; i++)
	{
		if (first)
		{
			if (arr[i] == arr[i - 1])
			{
				aux1++;
			}
			else
			{
				ans = max(ans, min(aux1, aux2));
				aux2 = 1;
				first = false;
			}
		}
		else
		{
			if (arr[i] == arr[i - 1])
			{
				aux2++;
			}
			else
			{
				ans = max(ans, min(aux1, aux2));
				aux1 = 1;
				first = true;
			}
		}
	}
	ans = max(ans, min(aux1, aux2));
	cout << ans * 2 ;
	return 0;
}