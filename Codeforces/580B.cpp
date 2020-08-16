#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;
int main(){
	ll n,d;
	cin>>n>>d;
	map<ll , ll> amigos;
	for(ll i=0;i<n;i++){
		ll m,s;
		cin>>m>>s;
		amigos[m]+=s;
	}
	auto it = amigos.begin();
	auto aux = it;
	ll answ =0, cont =1, answaux =0, pos = 0, cant = amigos.size();
	while(it != amigos.end() ){
		while( (aux ->first - it->first) < d && aux!=amigos.end()){
			if(cont>0) answaux += aux->second;
			aux++;
			cont++;
		}
		aux--;
		cont =0;
		answ = max(answ,answaux);
		answaux -= it->second;
		it++;		
	}
	cout<<answ<<endl;
	return 0;
}