#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

ll removeZero(ll n){
    ll a=0,b=0;
    while(n>0){
        ll dig = n%10;
        if(dig>0){
            a=a*10+dig;
        }
        n=n/10;
    }
    while(a>0){
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}


int main(){  
    ll a,b,c;
    cin>>a>>b;
    c=a+b;
    if(removeZero(a)+removeZero(b)==removeZero(c)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}