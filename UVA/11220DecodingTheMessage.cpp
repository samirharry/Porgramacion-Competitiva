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
        }
        coloca.push_back(aux[i]);
    }
    answer.push_back(coloca);
    return answer;
}

int main(){
    ll n;
    cin>>n;
    ll cases=0;
    string aux;
    getline(cin,aux);   
    while(n--){
        cout<<"Case #"<<++cases<<":"<<endl;
        while(true){
            getline(cin,aux);
            if(aux == "") break;
            vector <string> palabras = splitString(aux,' ');
            string mess = "";
            ll itAct = 0;
            for(ll i =0;i<(ll)palabras.size();i++){
                if(itAct>(ll)palabras[i].length()-1) continue;
                mess.push_back(palabras[i][itAct]);
                itAct++;
            }
            cout<<mess<<endl;
        }
    }
      
    return 0;
}