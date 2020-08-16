#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

bool isLuckyDigit(ll a){
    return (a==4||a==7);
}

ll cantidadDeLuckyNumbers(ll num){
    ll answ=0;
    while(num>0){
        ll lastDigit = num%10;
        if(isLuckyDigit(lastDigit)){
            answ++;
        }
        num/=10;
    }
    return answ;
}

int main(){  
    ll n,k;
    cin>>n>>k;
    ll answ =0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(cantidadDeLuckyNumbers(a)<=k) answ++;
    }
    cout<<answ<<endl;
    return 0;
}