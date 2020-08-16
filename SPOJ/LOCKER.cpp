#include <bits/stdc++.h>

#define debug(x) cout << #x << "=>" << x << endl;
#define debugArray(x, n)        \
	for (int i = 0; i < n; i++) \
		cout << #x << "[" << i << "] => " << x[i] << endl;
typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		if (n & 1 == 1)
		{
			ll a = n / 2;
			a = a % (1000000007);
			cout << a * a + a << endl;
		}
		else
		{
			ll a = n / 2;
			a = a % (1000000007);
			cout << a * a << endl;
		}
	}
	return 0;
}