#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

ll count(ll n)
{
	if (n == 2)
		return 2;
	return 2 * count(n - 2);
}

int main()
{
	ll n;
	cin >> n;
	if (n % 2 != 0)
		cout << 0 << endl;
	else
		cout << count(n) << endl;

	return 0;
}