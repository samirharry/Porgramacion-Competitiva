#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

ll fastPow(ll base, ll expo){
		ll answ = 1;
	while(expo>0){
		if(expo & 1 == 1){
			answ = answ*base;
		}
		expo >>= 1;
		base = base*base;
	}
	return answ;
}

string tobase3(ll n){
	string aux="";
	while(n>0){
		aux.push_back(n%3 + '0');
		n=n/3;
	}
	aux.push_back('0');
	reverse(aux.begin(),aux.end());
	return aux;
}
int main(){
	ll q;
	cin>>q;
	while( q--){
		ll aux;
		cin>>aux;
		string auxAn = tobase3(aux);
		ll cant = (ll)auxAn.size();
		ll answ =0;
		ll it=cant;
		for(ll i=0;i<cant;i++){
			if(auxAn[i] == '2' ){
				auxAn[i-1]++;
				it = i;
				ll aux = it-1;
				while(aux >=0){
					if(auxAn[aux]=='2') {
						auxAn[aux]='0';
						auxAn[aux-1]++;
						aux--;
						continue;
					}
					break;					
				}
				break;
			}
		}
	
		for(ll i=it;i<cant;i++) auxAn[i]='0';
	
		for(ll i=0;i<cant;i++) if(auxAn[i]=='1') answ+= fastPow(3,cant-i-1); 
		cout<<answ<<endl;
	}

	return 0;
}