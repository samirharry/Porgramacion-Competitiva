#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll q ;
	cin>>q;
	while (q--)
	{
		ll n;
		cin >> n;
		ll pos[n + 1];
		for (ll i = 1; i <= n; i++)
		{
			cin >> pos[i];
		}
		for (ll i = 1; i <= n; i++)
		{
			ll aux = 1;
			ll act = i;
			while (pos[act] != i)
			{
				aux++;
				act = pos[act];
			}
			cout << aux << " ";
		}
		cout << endl;
	}
	return 0;
}