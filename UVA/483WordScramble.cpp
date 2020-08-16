#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;




int main(){
    string aux;
    while( getline(cin,aux) ){
       ll tam = aux.length();
       string auxil;
       for(ll i=0;i<tam;i++){
           if(aux[i] == ' '){
               reverse(auxil.begin(),auxil.end());
               cout<<auxil<<" ";
               auxil.clear();
               continue;
           }
           auxil.push_back(aux[i]);
       }
       reverse(auxil.begin(),auxil.end());
               cout<<auxil<<endl;
    }
      
    return 0;
}