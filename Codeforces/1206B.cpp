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
	ll cantPosi = 0, auxMone = 0, zero = 0, cantNegative = 0, cantOneNeg = 0, cantOnePos = 0;
	for (ll i = 0; i < n; i++)
	{
		ll aux;
		cin >> aux;
		if (aux > 1)
		{
			auxMone += (aux - 1);
		}
		else if (aux < -1)
		{
			cantOneNeg++;
			auxMone += (abs(aux) - 1);
		}
		else if (aux == 0)
		{
			zero++;
		}
		else if (aux == -1)
		{
			cantOneNeg++;
		}
	}

	if ((cantOneNeg % 2) == 0)
	{
		auxMone += zero;
	}
	else
	{
		if (zero > 0)
		{
			auxMone++;
			zero--;
			auxMone += (zero);
		}
		else
		{
			auxMone += 2;
		}
	}
	cout << auxMone << endl;
	return 0;
}