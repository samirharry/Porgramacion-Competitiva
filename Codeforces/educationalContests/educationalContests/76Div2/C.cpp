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
		ll prev[n + 1];
		for (ll i = 0; i <= n; i++)
		{
			prev[i] = -1;
		}
		ll answer = n + 1;
		bool isDom = false;
		for (ll i = 0; i < n; i++)
		{
			ll aux;
			cin >> aux;
			if (prev[aux] == -1)
			{
				prev[aux] = i;
				continue;
			}
			else
			{
				isDom = true;
				answer = min(answer, i - prev[aux] + 1);
				prev[aux] = i;
			}
		}

		if (isDom)
		{

			cout << answer << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	} /* code */

	return 0;
}