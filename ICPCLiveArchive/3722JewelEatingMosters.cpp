#include <bits/stdc++.h> 

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;


ll elevaMod(ll base,ll expo, ll mod){
	base = base%mod;
	ll res = 1;
	while (expo>0)
	{
		if(expo&1 == 1){
			res = ((res%mod)*(base%mod))%mod;
		}
		base = ((base%mod)*(base%mod))%mod;
		expo>>=1;
	}
	return res;
}


int main(){
	ll x,a,n,c;
	while(true){
		cin>>x>>a>>n>>c;
		if(x+a+n+c == 0) break;
		ll aton = elevaMod(a,n,c);
		ll amec = elevaMod(a-1,c-2,c);
		ll firs = (aton*(x%c))%c;
		ll sec = (((a%c)*((aton-1)%c))%c*(amec%c)) %c;
		if(firs-sec>=0){
		cout<< (firs-sec)%c<<endl;
		}else{
		cout<< (firs-sec)%c+c<<endl;
		}
	}
	return 0;
}