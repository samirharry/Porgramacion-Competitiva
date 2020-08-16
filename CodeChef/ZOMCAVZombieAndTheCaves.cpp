#include <bits/stdc++.h>

#define debug(x) cout<<#x<<"=>"<<x<<endl;
#define debugArray(x,n) for(int i = 0; i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
typedef long long ll;
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+2] ={0};
		for(ll i=1;i<=n;i++){
			ll aux;
			cin>>aux;
			arr[max(1LL,i-aux)]+=1;
			arr[min(n+1,i+1+aux)]-=1; 
		}
		ll arrZom[n] = {0};
		for(ll i=1;i<=n;i++){
			cin>>arrZom[i];
		}
		ll arrAct[n] = {0};
		arrAct[1] = arr[1];
		for(ll i=2;i<=n;i++){
			arrAct[i] = arr[i]+arrAct[i-1];
		}
		bool answr = true;
		sort(arrAct,arrAct+n+1);
		sort(arrZom,arrZom+n+1);
		for(ll i=1;i<=n;i++){
			if(arrAct[i] != arrZom[i]) {answr = false; break;}
		}
		if(answr) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
	/// a smksamd
}