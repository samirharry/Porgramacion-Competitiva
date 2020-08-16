#include <bits/stdc++.h>

#define debug(x) cout << #x << " => " << x << endl
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
	cout << #x << "[" << i << "] => " << x[i] << endl

using namespace std;

typedef long long ll;

int main()
{
	ll n;
	cin >> n;
	while (n--)
	{
		ll m,answer = 0;
		cin >> m;
		ll minA = LLONG_MAX, minB = LLONG_MAX;
		ll act[m][2];
		for (ll i = 0; i < m; i++)
		{
			cin >> act[i][0];
			minA = min(minA, act[i][0]);
		}
		for (ll i = 0; i < m; i++)
		{
			cin >> act[i][1];
			minB = min(minB, act[i][1]);
		}
		for( ll i=0;i<m;i++){
			ll difA = act[i][0] - minA, difB = act[i][1]- minB;
			ll both = min(difA,difB);
			answer += both + difA-both +difB-both;
		}
		cout<<answer<<endl;
	}
	return 0;
}