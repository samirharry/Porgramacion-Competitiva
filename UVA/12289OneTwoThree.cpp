#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;



int main(){
    ll n;
    cin>>n;
    while(n-- > 0){
       string aux;
       cin>>aux;
       ll tam = (ll) aux.length();
       if(tam == 5) cout<<3<<endl;
       else{
           string as1="one",as2="two";
            ll cant1=0,cant2=0;
           for(ll i=0;i<3;i++){
               if(aux[i] != as1[i]){
                   cant1++;
               }
               if(aux[i] != as2[i]){
                   cant2++;
               }
           }
           if(cant1<=1) cout<<1<<endl;
               else cout<<2<<endl;
       }
    }
      
    return 0;
}