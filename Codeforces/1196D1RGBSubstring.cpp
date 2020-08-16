#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	//Write here your code
	ll q;
	cin>>q;
	string t = "RGB";
	while(q--){
		ll n,k;
		string s;
		cin>>n>>k;
		cin>>s;
		ll ans = 1e9;
		for(ll i=0;i<n-k+1;i++){
			for(ll a = 0;a<3;a++){
				ll cur = 0;
				for(ll aux  =0; aux <k;aux++){
					if(s[i+aux] !=  t[(a+aux)%3] ){
						cur++;
					}
				}
				ans = min(ans,cur);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}