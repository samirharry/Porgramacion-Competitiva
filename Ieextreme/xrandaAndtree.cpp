#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

	ll n;
struct node
{
	ll nombre;
	node* padre;
	ll distanciaPadre;
	vector< pair<node* ,ll > > hijos;
};

void dfs(int node, int T[],int N, int P[], int L[], int nr ){
	x
}

int main(){
	cin>>n;
	vector< node*> arbol;
	node* root;
	root->nombre =0;
	root->distanciaPadre =0;
	root-> padre = NULL;
	arbol.push_back(root);
	node* first;
	first->nombre = 1;
	first-> distanciaPadre =0;
	first->padre = arbol[0];
	first->padre->hijos.push_back( make_pair (first,0) );
	for(ll i=1;i<n-1;i++){		
		ll a,b,c;
		cin>>a>>b>>c;
		node* aux;
		aux->nombre= b;
		aux->padre = arbol[a];
		aux->distanciaPadre = c;
		aux->padre->hijos.push_back( make_pair(aux,c) );
	}

	return 0;
}