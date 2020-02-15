#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

bool isPrime[10001];

int main()
{
	ll t;
	for (ll i = 0; i <= 10000; i++)
	{
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for (ll i = 2; i * i <= 10000; i++)
	{
		if (isPrime[i])
		{
			for (ll j = i; j <= (10000 / i); j++)
			{
				isPrime[i * j] = false;
			}
		}
	}
	cin >> t;
	while (t--)
	{
		ll l, h;
		cin >> l >> h;
		bool isNull = true;
		vector<ll> answer;
		for (ll i = l; i <= h; i++)
		{
			if (i <= 1)
				continue;
			if (isPrime[i])
			{
				isNull = false;
				answer.push_back(i);
			}
			else
			{
				ll sq = sqrt(i);
				if (sq * sq == i)
				{
					ll cantDiv = 2;
					for (ll a = 2; a * a <= i; a++)
					{
						if (a * a == i)
							cantDiv++;
						else if (i % a == 0)
						{
							cantDiv += 2;
						}
					}
					if (isPrime[cantDiv])
					{

						isNull = false;
						answer.push_back(i);
					}
				}
			}
		}
		if (isNull)
		{
			cout << -1 << endl;
		}
		else
		{

			for (ll i = 0; i < (ll)answer.size() - 1; i++)
			{
				cout << answer[i] << " ";
			}
			cout << answer[(ll)answer.size() - 1] << endl;
		}
	}

	return 0;
}