#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

ll gcdEuclides(ll a, ll b){
	while(b){
		a%=b;
		swap(a,b);
	}
	return a;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		ll gcdAB = gcdEuclides(a,b);
		ll lcm = a/gcdAB*b;
		cout<<gcdAB<<" "<<lcm<<endl;
	}	
	return 0;
}