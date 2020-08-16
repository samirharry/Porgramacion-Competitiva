#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){  
    ll n,a,b;
    cin>>n;
    for(ll i=0;i<n-2;i++){
        cin>>a;
    }
    cin>>a;
    if(n==1){
        if(a==0)cout<<"UP"<<endl;
        else if(a==15) cout<<"DOWN"<<endl;
        else cout<<-1<<endl;
        return 0;
    }
    cin>>b;
    if (b==15)cout<<"DOWN"<<endl;
    else if(b==0)cout<<"UP"<<endl;
    else if(a>b)cout<<"DOWN"<<endl;
    else cout<<"UP"<<endl;
    return 0;
}