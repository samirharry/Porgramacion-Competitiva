#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll n;
	cin >> n;
	ll dp[n][2] = {0};
	ll arr1[n] = {0}, arr2[n] = {0};
	for (ll i = 0; i < n; i++)
		cin >> arr1[i];
	for (ll i = 0; i < n; i++)
		cin >> arr2[i];
	dp[0][0] = arr1[0];
	dp[0][1] = arr2[0];
	if (n > 1)
	{

		dp[1][0] = arr1[1] + arr2[0];
		dp[1][1] = arr2[1] + arr1[0];

		for (ll i = 2; i < n; i++)
		{
			dp[i][0] = max(dp[i - 1][1] + arr1[i], dp[i - 2][1] + arr1[i]);
			dp[i][1] = max(dp[i - 1][0] + arr2[i], dp[i - 2][0] + arr2[i]);
		}
	}
	cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
	return 0;
}