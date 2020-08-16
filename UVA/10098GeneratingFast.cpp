#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
ll arr[26];
string  aux;
string answ="";

void  inicializar(){
    for(ll i=0;i<26;i++)  arr[i]=0;
    answ ="";
}

void solve(ll nivel){
    if(nivel == 26) {
        cout<<answ<<endl;
        return;
    }
    if(arr[nivel] ==0) return solve(nivel+1);
    for(ll i=0;i<26;i++){
        if(arr[i]!=0){
            answ.push_back('a'+i);
            arr[i]--;
            solve(nivel);
            answ.pop_back();
            arr[i]++;
        }
    }
}

int main(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        inicializar();
        cin>>aux;
        for(ll i=0;i<(ll)aux.length();i++){
            arr[aux[i]-'a']++;
        }
        solve(0);
        cout<<endl;
    }
    return 0;
}