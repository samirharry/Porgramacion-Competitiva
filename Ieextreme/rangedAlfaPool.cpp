#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

ll fastPow(ll base, ll expo){
	ll answ =1;
	while(expo){
		if(expo &1  == 1){
			answ = base*answ;
		}
		base= base*base;
		expo >>=1;
	}
	return answ;
}

ll solve( ll a,ll b){
	ll maxLog = log2(b);
	if( fastPow( 2,maxLog ) <b ) maxLog++;
	for( ll i=0;i<maxLog;i++){
		ll cant = 
	}
}

int main(){
	cin>>n;
	cin>>a>>b;
	solve(0);
	return 0;
}