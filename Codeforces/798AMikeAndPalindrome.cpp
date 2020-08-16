#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){  
   string s;
   cin>>s;
    ll  cont =0;
    ll tam = (ll)s.size();
    ll mitad = tam/2- (1-tam%2);
   for(ll i=0;i<=mitad;i++){

       if(s[i]!=s[(ll)s.size()-1-i] ){
           cont++;
       }
       if(i==(ll)s.size()-1-i&& cont<1){
           cont++;
       }
   }
   if(cont==1){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
    return 0;
}