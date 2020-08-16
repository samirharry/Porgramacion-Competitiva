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
		ll h, m;
		cin >> h >> m;
		if (m == 0)
		{
			cout << (24 - (h)) * 60 << endl;
		}
		else
		{
			cout << 60 - m + (24 - (h + 1)) * 60 << endl;
		}
	}
	return 0;
}