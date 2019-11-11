#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;
int main(){
	string aux;
	cin>>aux;
	ll n = aux.size();
	bool isAnswer = false;
	bool ABFind= false;
	bool BAFind= false;
	for(ll i=0;i<n-1;i++){
		string cadaux = aux.substr(i,2);
		if(cadaux == "AB" && !ABFind  ){
			ABFind = true;i++ ;
		}else if(cadaux == "BA" && !BAFind && ABFind){
			BAFind = true;i++;
		}
		isAnswer = ABFind&&BAFind;
		if(isAnswer) break;
	}
	if(isAnswer){
		cout<<"YES"<<endl;
		return 0;
	}
	ABFind= false;
	BAFind= false;
	for(ll i=0;i<n-1;i++){
		string cadaux = aux.substr(i,2);
		if(cadaux == "BA" && !BAFind){
			BAFind = true;i++ ;
		}else if(cadaux == "AB" && !ABFind && BAFind ){
			ABFind = true;i++;
		}
		isAnswer = ABFind&&BAFind;
		if(isAnswer) break;
	}
	if(isAnswer){
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
	return 0;
}