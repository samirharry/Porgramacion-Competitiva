#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;


ll gcdEuclideanAlgorithm(ll a,ll b,ll &x,ll &y){
	if( a==0){
		x = 0LL;
		y =1LL;
		return b;
	}
	ll x1,y1;
	ll d = gcdEuclideanAlgorithm(b%a,a,x1,y1);
	x = y1-(b/a)*x1;
	y = x1;
	return d;
}

int main(){
	ll a,b;
	while(cin>>a >>b){
		ll x,y;
		ll d = gcdEuclideanAlgorithm(a,b,x,y);
		if(a==b){
		cout<<min(x,y)<<" " << max(x,y) <<" "<<d<<endl;

		}else{
		cout<<x<<" " << y <<" "<<d<<endl;

		}
	}
	return 0;
}