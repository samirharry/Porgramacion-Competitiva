#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){
    ll n;
    cin>>n;
    while(n--){
        string aux;
        cin>>aux;
        ll tam = (ll) aux.length();
        ll answ = tam;
        for(ll i=1;i<=tam;i++){
            bool isAnswer = true;
            if(tam %i == 0 ){
                string auxstr = aux.substr(0,i);
                for(ll a =i;a<tam;a+=i){
                    string newStr = aux.substr(a,i);
                    if(newStr != auxstr){
                        isAnswer = false;
                        break;
                    }
                }
            }else {continue;}
            if(isAnswer){
                answ = i;
                break;
            }
        }
        cout<<answ<<endl;
        if(n>=1) cout<<endl;
    }
    return 0;
}