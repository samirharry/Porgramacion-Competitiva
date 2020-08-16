#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;
int main(){
	ll n;
	cin>>n;
	string aux;
	cin>>aux;
	ll cantOne=0;
	for(ll i=0;i<n;i++){
		if(aux[i]=='n') cantOne++;
	}
	for(ll i=0;i<cantOne;i++){
		cout<<"1 ";
	}
	ll cantZero = (n-(3*cantOne))/4;
	for(ll i=0;i<cantZero;i++) cout<<"0 ";

	return 0;
}