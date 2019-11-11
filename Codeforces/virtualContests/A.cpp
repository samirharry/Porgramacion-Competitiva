#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n)  for(int i=0;i<n;i++) cout<<#x<<"["<<i"] => "<<x[i]<<endl;

using namespace std;
typedef long long ll;


int main(){
	ll q;
	cin>>q;
	while(q--){
		ll n;
		cin>>n;
		ll total = n;
		ll sum = 0;
		while(n--){
			ll aux;
			cin>>aux;
			sum+=aux;
		}
		if(sum%total == 0){
			cout<<sum/total<<endl;
		}else{
			cout<<sum/total +1<<endl;
		}
	}

	return 0;
}