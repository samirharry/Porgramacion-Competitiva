#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, a, b;

bool isTaken[ b-a+1 ] = {true};

void solve( ll level){
	if(level == (a-1)){
		return;
	}
	for(ll i=)
}

int main()
{
	cin >> n >> a >> b;
	ll arreglo[b - a + 1] = {0};
	ll cant = n;
	for (ll i = b; i >= a; i--)
	{
		cant  =n;
		for (ll aux = i; aux >=a ;aux--)
		{
			arreglo[aux - a] = cant / aux;
			cant = cant % aux;
			if ( cant == 0)		break;
		}
		if(cant == 0) break;
		for(ll i=a;i<=b;i++){
			arreglo[i-a] = 0;
		}
	}
	if(cant != 0 ){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
		for (ll aux = a; aux <= b ;aux++)
			{
				for(ll i=0;i< arreglo[aux-a];i++){
					cout<<aux <<" ";
				}
			}		
			cout<<endl;
	}
	return 0;
}