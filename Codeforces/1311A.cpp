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
		ll a, b;
		cin >> a >> b;
		ll answ;
		if (a > b)
		{
			answ = ((a - b) % 2 == 0) ? 1 : 2;
		}
		else if (a < b)
		{
			answ = ((b - a) % 2 == 0) ? 2 : 1;
		}
		else
		{
			answ = 0;
		}
		cout << answ << endl;
	}
	return 0;
}