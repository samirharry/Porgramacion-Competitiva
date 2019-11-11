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
	ll auxAns = 1, ans = 0;
	ll aux;
	cin >> aux;
	for (ll i = 1; i < n; i++)
	{
		ll am;
		cin >> am;
		if (am > aux)
		{
			auxAns++;
			aux = am;
		}
		else
		{
			aux = am;
			ans = max(ans, auxAns);
			auxAns = 1;
		}
	}
	ans = max(ans, auxAns);
	cout << ans << endl;
	return 0;
}