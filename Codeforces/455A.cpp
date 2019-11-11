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
	ll cant[100001] = {0};
	ll punt[100001] = {0};
	for (ll i = 0; i < n; i++)
	{
		ll aux;
		cin >> aux;
		cant[aux]++;
	}
	for (ll i = 0; i < 100001; i++)
	{
		punt[i] = cant[i] * i;
	}

	return 0;
}