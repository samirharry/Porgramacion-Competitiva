#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll sum=0,a,b;
    cin>>a>>b;
    for(ll i=0;i<a;i++){
        ll aux;
        cin>>aux;
        sum+=aux;
    }
    sum = abs(sum);
    if(sum%b>0){
        
    cout<<sum/b+1<<endl;
    }else{
        cout<<sum/b<<endl;
    }
    return 0;
}