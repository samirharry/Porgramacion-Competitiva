#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){  
    ll n;
    cin>>n;
    vector<ll> soldiers;
    ll maxSol=0,maxPos=0,minSol=__LONG_LONG_MAX__,minPos=0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a>maxSol){
            maxSol=a;
            maxPos = i;
        }
        if(a<=minSol){
            minSol=a;
            minPos =i;
        }
    }
    if(minPos<maxPos){
        cout<<maxPos+n-1-minPos-1<<endl;
    }else{
            cout<<maxPos+n-1-minPos<<endl;
    }
    return 0;
}