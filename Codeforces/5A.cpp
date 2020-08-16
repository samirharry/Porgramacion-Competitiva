#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	string aux;
	ll cantidadpersonas = 0;
	ll trafico = 0;
	while (getline(cin, aux))
	{
		if (aux[0] == '+')
		{
			cantidadpersonas++;
		}
		else if (aux[0] == '-')
		{
			cantidadpersonas--;
		}
		else
		{

			for (ll i = 0; i < (ll)aux.size(); i++)
			{
				if (aux[i] == ':')
				{

					trafico += cantidadpersonas * (((ll)aux.size()) - i - 1);
					break;
				}
			}
		}
	}
	cout << trafico;
	return 0;
}