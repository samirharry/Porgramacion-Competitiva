#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	//Write here your code
	ll q;
	cin>>q;
	while(q--){
		ll a,b,c;
		cin>>a>>b>>c;
		cout<<(a+b+c)/2<<endl;
	}
	return 0;
}