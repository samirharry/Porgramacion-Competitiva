#include <bits/stdc++.h>

#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
#define debug(x) cout<<#x<<"=>"<<x<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;

ll fastMod(ll base, ll expo , ll mod){
	base = base%mod;
	ll res  = 1;
	while(expo>0){
		if(expo&1 == 1){
			res = (res*base)%mod;
		}
		base = (base*base%mod);
		expo>>=1;
	}
	return res;
}

ll cantCifras(ll num){
	ll res = 0;
	while(num>0){
		res++;
		num = num/10;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll treeLastDigits= fastMod(n,k,1000);
		double x = k*(log10(n));
		x = x -(int) x;
		ld ans = pow(10,x);
		ans = ans* 100;
		ll firstThreeDigits = (ll) ans;

		string prim = to_string(firstThreeDigits);
		string sec = to_string(treeLastDigits);
		ll aux = 3-sec.length();
		string secun(aux,'0');
		secun.append(sec);
		prim.append("...");
		prim.append(secun);
		cout<<prim<<endl;
	}
	return 0;
}