#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll q;
	cin >> q;
	while (q--)
	{
		ll a, b, n, S;
		cin >> a >> b >> n >> S;
		ll maximo = a * n + b;
		if (S > maximo)
		{
			cout << "NO" << endl;
		}
		else
		{
			if (b < n)
			{
				cout << ((S % n > b) ? "NO" : "YES") << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}