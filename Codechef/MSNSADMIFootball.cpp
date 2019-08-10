#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;

//// SOlucion mandada por samirharry

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll q;
	cin>>q;
	while(q--){
		ll n;
		cin>>n;
		ll A[n],B[n];
		ll answ = -1;
		for(ll i=0;i<n;i++) cin>>A[i];
		for(ll i=0;i<n;i++) cin>>B[i];
		for(ll i=0;i<n;i++){
			ll resp = 20*A[i]-10*B[i];
			resp = max ( 0LL,resp);
			answ = max(resp,answ);
		}
		cout<<answ<<endl;
	}
	return 0;
}