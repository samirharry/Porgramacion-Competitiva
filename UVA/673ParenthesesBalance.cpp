#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

string isValid(string s){
    stack<char> validator;
    ll tam = (ll)s.length();
    for(ll i= 0;i<tam;i++){
        if(s[i]=='('||s[i]=='[') validator.push(s[i]);
        else{
            if(validator.empty()) return "No";
            char aux = validator.top();
            if(aux == '[' && s[i]==']') {
                validator.pop();
                continue;
            }
            if(aux == '(' && s[i]==')') {
                validator.pop();
                continue;
            }
            return "No";
        }
    }
     return validator.empty()?"Yes":"No";

}

int main(){
    ll n;
    cin>>n;
    string aux;
    getline(cin,aux);
    while(n--){
        getline(cin,aux);
        cout<<isValid(aux)<<endl;
    }
    return 0;
}
