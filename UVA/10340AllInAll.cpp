#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;




int main(){
    string s,t;
    while( cin>>s&& cin>>t ){
       ll itStr = 0;
       for(ll i=0;i<(ll) t.length();i++){
           if(t[i] == s[itStr]){
               itStr++;
           }
       }
       if(itStr == (ll)s.size()) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
      
    return 0;
}