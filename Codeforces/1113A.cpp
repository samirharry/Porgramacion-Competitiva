#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll n, v;
	cin >> n >> v;
	ll dp[n + 1][2] = {0};
	for (ll i = 1; i <= n; i++)
	{
		dp[i][1] = max(0LL, dp[i - 1][1] - 1);
		ll combustibleActual = dp[i][1];
		if (combustibleActual >= n - i)
		{
			dp[i][0] = dp[i - 1][0];
		}
		else
		{
			ll cantCompra = min(v - combustibleActual, (n - i - combustibleActual));
			dp[i][0] = dp[i - 1][0] + i * cantCompra;
			dp[i][1] += cantCompra;
		}
	}
	cout << dp[n][0] << endl;
	return 0;
}