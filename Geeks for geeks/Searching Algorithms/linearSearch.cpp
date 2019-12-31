#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

ll linearSearch(ll array[], ll n, ll elemento)
{
	for (ll i = 0; i < n; i++)
	{
		if (array[i] == elemento)
			return i;
	}
	return -1;
}

int main()
{
	ll arr[10] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
	ll x = 175;

	cout << linearSearch(arr, 10, x) << endl;
	return 0;
}