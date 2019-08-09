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
    ll n,idd;
    cin>>n;
    idd=n-1;
    ll cases=0;
    string aux;
    getline(cin,aux);
	bool notNo = true;
    while(n--){
        if(notNo)getline(cin,aux);
        cout<<"Case #"<<++cases<<":"<<endl;
        bool isas = true;
		while(true){
            getline(cin,aux);
            if(aux == ""){
				notNo = false;
				isas = false;
			}
            vector <string> palabras = splitString(aux,' ');
            string mess = "";
            ll itAct = 0;
            for(ll i =0;i<(ll)palabras.size();i++){
                if(itAct>(ll)palabras[i].length()-1) continue;
                mess.push_back(palabras[i][itAct]);
			    itAct++;
            }
            if(isas) cout<<mess<<endl;
			else break;
        }
		if(n>=1){

        cout<<endl;
		}
    }
    return 0;
}