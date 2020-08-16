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
	//Write here your code
	ll q;
	cin >> q;
	while (q--)
	{
		ll n, k, imp = 0, cantImp = 0;
		cin >> n >> k;
		ll arr[n], arrImp[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 1)
			{
				arrImp[imp++] = i;
			}
		}
		if (imp < k)
		{
			cout << "NO" << endl;
		}
		else if (imp == k)
		{
			cout << "YES" << endl;
			for (ll i = 0; i < imp - 1; i++)
			{
				cout << arrImp[i] + 1 << " ";
			}
			cout << n << endl;
		}
		else
		{
			if ((imp - k) % 2 == 0)
			{
				cout << "YES" << endl;
				for (ll i = 0; i < k - 1; i++)
				{
					cout << arrImp[i] + 1 << " ";
				}
				cout << n << endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}