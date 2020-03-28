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
		ll n, k;
		cin >> n >> k;
		if (n % k == 0)
		{
			cout << n << endl;
		}
		else
		{
			ll x = n % k;
			ll a = n / k;

			x = min(x, k / 2);
			cout << a * (k - x) + (a + 1) * (x) << endl;
		}
	}

	return 0;
}