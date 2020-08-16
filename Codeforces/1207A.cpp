#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while (t--)
	{
		ll b,p,f,h,c;
		cin>>b>>p>>f;
		cin>>h>>c;
		if(h>c){
			ll 	cantHa = min(b/2,p) ;
			ll	cantChick = min((b - 2*cantHa)/2,f);
			if(cantChick<0) cantChick=0;
			cout<<cantHa*h+cantChick*c<<endl;
		}
		else{
			ll 	cantChick = min(b/2,f) ;
			ll	cantHa = min((b - 2*cantChick)/2,p);
			if(cantHa<0) cantHa=0;
			cout<<cantHa*h+cantChick*c<<endl;
		}
	}
	return 0;
}