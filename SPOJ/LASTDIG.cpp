#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;
ll lastDig (ll base,ll expo, ll modul){
	ll res = 1;
	base = base%modul;
	while(expo>0){
		if(expo &1 ==1){
			res = (res*base)%modul;
		}
		base = (base*base)%modul;
		expo>>=1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	while( n--){
		ll a,b;
		cin>>a>>b;
		cout<<lastDig(a,b,10)<<endl;
	}
	return 0;
}