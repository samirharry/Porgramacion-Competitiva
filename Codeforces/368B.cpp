#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

bool isTomado[100001] = {false};

int main()
{
	ll n, m;
	cin >> n >> m;
	ll arr[n];
	ll arrn[m];
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (ll i = 0; i < m; i++)
	{
		cin >> arrn[i];
	}
	ll dp[n + 1] = {0};
	for (ll i = n - 1; i >= 0; i--)
	{
		if (isTomado[arr[i]])
		{
			dp[i] = dp[i + 1];
		}
		else
		{
			isTomado[arr[i]] = true;
			dp[i] = dp[i + 1] + 1;
		}
	}
	for (ll i = 0; i < m; i++)
	{
		cout << dp[arrn[i] - 1] << endl;
	}
	return 0;
}