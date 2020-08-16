#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

bool isVowel(char aux){
    string vowel = "aeiyouAEIYOU";
    for(ll i=0;i<(ll)vowel.length();i++){
        if(aux == vowel[i]) return true;
    }
    return false;
}

int main(){
    string cadena;
    cin>>cadena;
    for(ll i=0;i<(ll)cadena.length();i++){
        if(isVowel(cadena[i])) {
            cadena.erase(i,1);
            i--;
            continue;
        }
        cadena[i]=tolower(cadena[i]);
        cadena.insert(i,".");
        i++;
    }
    cout<<cadena<<endl;
    return 0;
}