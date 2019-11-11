#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;



int main(){
    ll cases=1;
    string cade;
    while (cin>>cade)
    {
        ll tam = cade.length();
        ll arr[tam+1];
        arr[0] = 0;
        for(ll i=1;i<=tam;i++){
            arr[i]=arr[i-1]+(ll)(cade[i-1]-'0');
        }
        ll querys;
        cin>>querys;
        cout<<"Case "<<cases++<<":"<<endl;
        for(ll i=0;i<querys;i++){
            ll  x,y;
            cin>>x>>y;
            if(x>y)  swap(x,y);
            ll answ = arr[y+1]-arr[x];
            if(answ ==0 || answ == y-x+1){
                cout<<"Yes"<<endl;
                continue;
            }
            cout<<"No"<<endl;
        }
    }   
    return 0;
}