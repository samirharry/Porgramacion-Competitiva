#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(5-a>=k){
            cnt++;
        }
    }
    cout<<cnt/3<<endl;
    return 0;
}