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
	ll aux = sqrt(n);
	while (n % aux != 0)
	{
		aux--;
	}
	cout << 2 * (aux + n / aux) << endl;
	return 0;
}