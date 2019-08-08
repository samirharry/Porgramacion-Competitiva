#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;


ll fastModulo(ll base ,ll expone, ll modu){
	base = base%modu;
	ll res = 1;
	while(expone>0){
		if(expone&1 == 1){
			res = (res*base)%modu;
		}
		base = (base*base)%modu;
		expone>>=1;
	}
	return res;
}

int main(){
	//Write here your code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll c;
	cin>>c;
	while(c--){
		ll x,y,n;
		cin>>x>>y>>n;
		cout<<fastModulo(x,y,n)<<endl;
	}
	return 0;
}