#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){  
    ll arr[3];
    ll n,answer = 0;
    cin>>n>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    ll answ = 0;
    for(ll i=0;i<= n;i++){
        ll sum =0;
        sum+=arr[0]*i;
        for(ll j=0;j<=n/arr[1];j++){
            sum+=arr[1]*j;
            if(sum>n) {
                sum-=arr[1]*j;    
                break;
            }
            if((n-sum) % arr[2]==0){
                answ = max(answ,i+j+ ((n-sum)/ arr[2]) );
            }
            sum-=arr[1]*j;
        }
        sum-=arr[0]*i;
    }
    cout<<answ<<endl;
    return 0;
}