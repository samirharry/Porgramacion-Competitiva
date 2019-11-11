#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll q;
	cin >> q;
	while (q--)
	{

		ll n;
		cin >> n;
		ll pares = 0, imp = 0;
		ll arr[n];
		ll teams=1;
		for(ll i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		for (ll i = 1; i < n; i++)
		{	
			if(arr[i] - arr[i-1]<=1){
				teams =2;
				break;
			}
		}
		cout<<teams<<endl;
	}
	return 0;
}