#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;
int main(){
	ll q;
	cin>>q;
	while(q--){
		ll n;
		cin>>n;
		if (n<=2) cout<< 2<<endl;
		else if( n%2 ==0) cout<< 0 <<endl;
		else cout<<1<<endl;
	}
	return 0;
}