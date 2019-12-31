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
		ll answ = 0;
		ll scores[11] = {0};
		while (n--)
		{
			ll p, s;
			cin >> p >> s;
			scores[p - 1] = max(scores[p - 1], s);
		}
		for (ll i = 0; i < 8; i++)
			answ += scores[i];
		cout << answ << endl;
	}
	return 0;
}