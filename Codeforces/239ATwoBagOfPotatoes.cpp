#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){  
    ll y,k,n;
    cin>>y>>k>>n;
    ll a=y/k+1,b=n/k;
    if(b-a<0) {
        cout<<-1<<endl;
        return 0;
    }
    for(ll i=a;i<=b;i++)  cout<<k*i-y<<" ";
    return 0;
}