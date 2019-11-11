#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
#define MOD 10000007
typedef long long ll;
typedef long double ld;

using namespace std;

ll eleva(ll base, ll expo){
	base = base%MOD;
	ll res = 1;
	while (expo >0)
	{
		if(expo & 1 ==1){
			res = (res*base)%MOD;
		}
		base = (base*base)%MOD;
		expo >>= 1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll a,b;
	while(true){
		cin>>a>>b;
		if(a==0 && b==0) break;
		ll p,q,r,s;
		p = eleva(a-1,b);
		q = eleva(a-1,a-1);
		r = eleva(a,b);
		s = eleva(a,a);
		p = (2*(p+q))%MOD;
		p= (p+r+s)%MOD;
		cout<<p<<endl;
	}

	return 0;
}