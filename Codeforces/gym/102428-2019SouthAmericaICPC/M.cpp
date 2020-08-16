#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll n, x;
	cin >> n >> x;
	ll mountains[n], answer = 0, aux = 1;
	for (ll i = 0; i < n; i++)
	{
		cin >> mountains[i];
	}
	for (ll i = 1; i < n; i++)
	{
		if (mountains[i] - mountains[i - 1] <= x)
		{
			aux++;
		}
		else
		{
			answer = max(answer, aux);
			aux = 1;
		}
	}
	answer = max(answer, aux);
	cout << answer << endl;
	return 0;
}