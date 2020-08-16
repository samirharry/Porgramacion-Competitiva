#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll q ;
	cin>>q;
	while (q--)
	{
		ll n;
		cin >> n;
		ll pos[n + 1];
		ll answ[n+1] = {0};
		for (ll i = 1; i <= n; i++)
		{
			cin >> pos[i];
		}
		for (ll i = 1; i <= n; i++)
		{
			if(answ[i] >0) continue;
			ll aux = 1;
			ll act = i;
			vector<ll> auxil;
			auxil.push_back(act);
			while (pos[act] != i)
			{
				aux++;
				act = pos[act];
				auxil.push_back(act);
			}
			for(ll i=0;i< auxil.size();i++){
				answ[auxil[i]]=aux;
			}
		}
		for(ll i=1;i<=n;i++) cout<<answ[i]<<" ";
		cout<<endl;
	}
	return 0;
}