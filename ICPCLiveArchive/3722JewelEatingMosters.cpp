#include <bits/stdc++.h> 

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;


int gcdExtended(int a, int b, int &x, int &y);

int modInverse(ll b, ll m){
    int x,y;
    ll g = gcdExtended(b,m,x,y);
    if(g!=-1){
        return -1;
    }
    return (x%m+m)%m;

}

ll modDivide(ll a,ll b, ll m){
    a = a%m;
    ll inv = modInverse(b,m);
    return (inv*a)%m;
}

ll elevaMod(ll base,ll expo, ll mod){
    base = base%mod;
    ll res = 1;
    while (expo>0)
    {
        if(expo&1 == 1){
            res = ((res%mod)*(base%mod))%mod;
        }
        base = ((base%mod)*(base%mod))%mod;
        expo>>=1;
    }
    return res;
}
int gcdExtended(int a, int b, int &x, int &y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        x = 0, y = 1; 
        return b; 
    } 
  
    int x1, y1; // To store results of recursive call 
    int gcd = gcdExtended(b%a, a, x1, y1); 
  
    // Update x and y using results of recursive 
    // call 
    x = y1 - (b/a) * x1; 
    y = x1; 
  
    return gcd; 
} 

int main(){
    ll x,a,n,c;
    while(true){
        cin>>x>>a>>n>>c;
        if(x+a+n+c == 0) break;
        ll aton = elevaMod(a,n,c);
        ll firs = (aton*(x%c))%c;
        ll sec = modDivide(((a*(aton-1))%c),a-1,c);
        cout<<(firs-sec)%c<<endl;
    }
    return 0;
}