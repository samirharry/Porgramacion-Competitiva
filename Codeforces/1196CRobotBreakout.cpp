#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	ll q;
	cin>>q;
	while(q--){
		ll n;
		cin>>n;
		ll maxX = 100000,minX = -100000,maxY = 100000,minY = -100000;
		while(n--){
			ll x,y,f1,f2,f3,f4;
			cin>>x>>y>>f1>>f2>>f3>>f4;
			if(f1==0){
				minX = max(minX,x);
			}
			if(f2==0){
				maxY = min(maxY,y);
			}
			if(f3==0){
				maxX = min(maxX,x);
			}
			if(f4==0){
				minY = max(minY,y);
			}
		}
		if(minX<=maxX && minY<=maxY){
			cout<<1<<" "<<minX<<" "<<minY<<endl;
		}else{
			cout<<0<<endl;
		}
	}
	return 0;
}