#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	while(n--){
		string aux;
		cin>>aux;
		ll cantUno = 0;
		for(ll i=0;i<aux.length();i++){
			if(aux[i] == '1') cantUno++;
		}
		if(cantUno&1 ==1) cout<<"WIN"<<endl;
		else cout<<"LOSE"<<endl;
	}
	return 0;
}