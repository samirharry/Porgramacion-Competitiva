#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){
    string aux;
    while(true){
        getline(cin,aux);
        if(aux== "DONE") break;
            ll n = (ll)aux.length();
            ll i=0,j=n-1;
            string answ="You won't be eaten!";
            while(i<=j){
                while(aux[i]=='.'||aux[i]==','||aux[i]=='?'|| aux[i]=='!'|| aux[i]==' '){
                    i++;
                }
                while(aux[j]=='.'||aux[j]==','||aux[j]=='?'||aux[j]=='!' || aux[j]==' '){
                    j--;
                }
                if(i>j) break;
                if(tolower(aux[i++]) != tolower(aux[j--])){
                    answ = "Uh oh..";
                    break;
                }

            }
            cout<<answ<<endl;
    }
      
    return 0;
}