#include <bits/stdc++.h>

#define debug(x) cout << #x << "=>" << x << endl;
#define debugArray(x, n)        \
	for (int i = 0; i < n; i++) \
		cout << #x << "[" << i << "] => " << x[i] << endl;
typedef long long ll;
typedef long double ld;

using namespace std;

ll fastMod(ll base, ll expo, ll mod)
{
	base = base % mod;
	ll res = 1;
	while (expo > 0)
	{
		if (expo & 1 == 1)
			res = (res * base) % mod;
		expo>>=1;
		base = (base*base)%mod;
	}
	return res;
}
int main()
{
	//Write here your code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll a ,b,c;
	while(cin>>a>>b>>c){
		cout<<fastMod(a,b,c)<<endl;
	}
	return 0;
}