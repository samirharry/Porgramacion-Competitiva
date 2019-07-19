#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

vector<string> splitString(string aux, char sepa){
	ll tam = (ll )aux.length();
	vector<string> answer;
	string coloca = "";
	for(ll i=0;i<tam;i++){
		if(aux[i] == ' '){
			answer.push_back(coloca);
			coloca.clear();
			continue;
		}
        coloca.push_back(aux[i]);
    }
    answer.push_back(coloca);
    return answer;
}

int main(){
    ll t,cases=0;
    cin>>t;
    while(t--){
        ll  n;
        cin>>n;
        string aux;
        getline(cin,aux);
        cout<<"Case "<< ++cases<<":"<<endl;
        while(n--){
            getline(cin,aux);
            ll cnt =0;
            for(ll i=0 ;i< (ll) aux.length() ;i++){
                if(aux[i] != ' '){
                    cnt=0;
                    continue;
                }
                if(cnt>0){
                    while(aux[i]==' '){
                        aux.erase(aux.begin()+i);
                    }
                    cnt=0;
                    continue;
                }
                if(aux[i] == ' ' && cnt==0){
                    cnt++;
                    continue;
                }
            }
            cout<<aux<<endl;
        }
        if(t>=1) cout<<endl;
    }

    return 0;
}