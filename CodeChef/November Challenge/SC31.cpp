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
		string weapons[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> weapons[i];
		}
		string aux = weapons[0];
		for (ll i = 1; i < n; i++)
		{
			for (ll j = 0; j < 10; j++)
			{
				if (aux[j] == '1' && weapons[i][j] == '1')
				{
					aux[j] = '0';
				}
				else
				{
					aux[j] = max(aux[j], weapons[i][j]);
				}
			}
		}
		int resp = 0;
		for (int i = 0; i < 10; i++)
		{
			if (aux[i] == '1')
				resp++;
		}
		cout << resp << endl;
	}
	return 0;
}