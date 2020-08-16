#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll n, m;
	cin >> n >> m;
	string firstString[n], secondString[m];
	for (ll i = 0; i < n; i++)
	{
		cin >> firstString[i];
	}
	for (ll i = 0; i < m; i++)
	{
		cin >> secondString[i];
	}

	ll t;
	cin >> t;
	while (t--)
	{
		ll year;
		cin >> year;
		ll firstIt = (year - 1) % n, secondIt = (year - 1) % m;
		cout << firstString[firstIt] << secondString[secondIt] << endl;
	}

	return 0;
}