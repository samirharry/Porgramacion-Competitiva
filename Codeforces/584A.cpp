#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{

	int n, t;
	cin>>n>>t;
	if(n==1 && t == 10) cout<<-1<<endl;
	else{
		cout<<t;
		if(t==10) n--;
		for(int i=0;i<n-1;i++) cout<<0;
	}
	return 0;
}