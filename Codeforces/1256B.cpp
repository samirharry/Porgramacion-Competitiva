#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll q;
	cin >> q;
	while (q--)
	{
		ll n;
		cin >> n;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (ll j = n - 2; j >= 0; j--)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
		for (ll i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}