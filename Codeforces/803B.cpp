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
	ll arr[n];
	ll answ[n];
	vector<ll> zeros;
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
			zeros.push_back(i);
	}
	ll z = zeros.size();
	ll aux = 0;
	for (ll i = 0; i <= zeros[0]; i++)
		answ[i] = zeros[0] - i;

	for (ll i = 0; i < z - 1; i++)
	{
		for (ll k = zeros[i]; k <= zeros[i + 1]; k++)
		{
			answ[k] = min(abs(zeros[i] - k), abs(zeros[i + 1] - k));
		}
	}
	ll lastZero = zeros[z - 1];
	for (ll i = lastZero; i < n; i++)
	{
		answ[i] = i - lastZero;
	}

	for (ll i = 0; i < n; i++)
		cout << answ[i] << " ";
	return 0;
}