#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;
int main(){
	ll n;
	cin>>n;
	while(n--){
		string aux;
		cin>>aux;
		vector<ll> conjunto;
		bool arr[4] = {false};
		ll a=0,b=0,c=0,d=0;
		string stA,stB,stC,stD;
		for(ll i=0;i<n;i++){
			if(aux[i] == 'A') a++;
			if(aux[i] == 'B') b++;
			if(aux[i] == 'C') c++;
			if(aux[i] == 'D') d++;
			if(arr[aux[i]-'A']){
				continue;
			}else{
				arr[aux[i]-'A'] = true;
				conjunto.push_back(aux[i]);
			}		
		}
		for(ll i=0;i<(ll) aux.size();i++){
			
		}
	}
	return 0;
}