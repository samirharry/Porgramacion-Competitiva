#include <bits/stdc++.h>

#define debug(x) cout << #x << " => " << x << endl
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
	cout << #x << "[" << i << "] => " << x[i] << endl

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
		ll num2 = 0, num0 = 0;
		while (n--)
		{
			ll aux;
			cin >> aux;
			num0 += (aux == 0);
			num2 += (aux == 2);
		}
		ll answ = num2 * (num2 - 1) / 2 + num0 * (num0 - 1) / 2;
		cout << answ << endl;
	}
	return 0;
}