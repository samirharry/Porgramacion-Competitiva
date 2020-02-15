#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;



using namespace std;

typedef long long ll;
const ll MAX = 1000001;

bool isPrime[MAX];

int main()
{

	for (ll i = 0; i < MAX; i++)
	{
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for (ll i = 2; i * i <= MAX; i++)
	{
		if (isPrime[i])
		{
			for (ll j = i; j <= (MAX / i); j++)
			{
				isPrime[i * j] = false;
			}
		}
	}
	ll n;
	cin >> n;
	while (n--)
	{
		ll m;
		cin >> m;
		ll raiz = sqrt(m);
		(raiz * raiz == m && isPrime[raiz]) ? cout << "YES" << endl : cout << "NO" << endl;
	}

	return 0;
}