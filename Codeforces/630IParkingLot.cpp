#include <bits/stdc++.h>

#define debug(x) cout << #x << "=>" << x << endl;
#define debugArray(x, n)        \
	for (int i = 0; i < n; i++) \
		cout << #x << "[" << i << "] => " << x[i] << endl;
typedef long long ll;
typedef long double ld;

using namespace std;

ll fastpow(ll base, ll expon)
{
	ll res = 1;
	while (expon > 0)
	{
		if (expon & 1 == 1)
		{
			res = res * base;
		}
		base = base * base;
		expon >>= 1;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin >> n;
	cout<<( fastpow(4,n-3)*(24+(n-3)*9))<<endl;
	return 0;
}