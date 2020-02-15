#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

void printFormat(ll a, ll b, ll c)
{
	cout << a << " = " << b << " + " << c << endl;
}

bool isPrime[1000001];

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

	ll n;
	while (true)
	{
		cin >> n;
		if (n == 0)
			break;
		for (ll i = 2; i + i <= n; i++)
		{
			if (isPrime[i] && isPrime[n - i])
			{
				printFormat(n, i, n - i);
				break;
			}
		}
	}
	return 0;
}