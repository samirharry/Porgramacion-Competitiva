#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;
vector< pair<ll,ll> > vess;
ll n,ta;
void agregar(ll pos,ll liter){
    for(ll i=pos-1;i<=n;i++){
        if( i==n) break;
        if(liter ==0) break;
        if(vess[i].second < vess[i].first){
            ll disponible = vess[i].first-vess[i].second;
            if(liter<disponible){
                vess[i].second+=liter;
                liter-=liter;
            }else{
                vess[i].second+=disponible;
                liter-=disponible;
            }
        } 
    }
}

void consultar(ll f){
    cout<<vess[f-1].second<<endl;
}

int main(){
    cin>>n;
    ta=n;
    while(ta--){
        ll aux;
        cin>>aux;
        vess.push_back(make_pair(aux,0));
    }
    ll m;
    cin>>m;
    while(m--){
        ll t,f,s;
        cin>>t;
        if(t==1){
            cin>>f>>s;
            agregar(f,s);
        }else{
            cin>>f;
            consultar(f);            
        }
    }
    return 0;
}