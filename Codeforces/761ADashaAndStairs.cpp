#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){  
   ll a,b;
   cin>>a>>b;
   if(a==0 && b==0)cout<<"NO"<<endl;
    else if(abs(a-b)<=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}