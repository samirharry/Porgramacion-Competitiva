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
		ll x, y;
		cin >> x >> y;
		bool answe = false;
		if (x >= y)
		{
			answe = true;
		}
		else
		{
			if (x == 2 && y == 3)
			{
				answe = true;
			}
			else if (x <= 3)
			{
				answe = false;
			}
			else
			{
				answe = true;
			}
		}
		if (answe)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}