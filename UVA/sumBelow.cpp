#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

bool isPrime[1000001];
ll sum[1000001];

int main()
{
	for (ll i = 0; i < 1000001; i++)
	{
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for (ll i = 2; i * i <= 1000001; i++)
	{
		if (isPrime[i])
		{
			for (ll j = i; j <= (1000001 / i); j++)
			{
				isPrime[i * j] = false;
			}
		}
	}
	sum[0] = 0;
	for (ll i = 1; i < 1000001; i++)
	{
		if (isPrime[i])
		{
			sum[i] = i + sum[i - 1];
		}
		else
		{
			sum[i] = sum[i - 1];
		}
	}
	ll t;
	cin >> t;
	while (t--)
	{
		ll q;
		cin >> q;
		cout << sum[q] << endl;
	}
	return 0;
}