#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

struct Node
{
	int data;
	int parentsWithCats;
	vector<Node *> hijos;
	Node *parent;
	Node(int data, Node *parent)
	{
		this->data = data;
		this->parent = parent;
		this->parentsWithCats = 0;
	}
};

bool isACat[100001] = {false};
ll n, m;
ll answ = 0;
void solve(Node *vertice)
{
	if (isACat[vertice->data])
	{
		if (vertice->parent != NULL)
		{
			vertice->parentsWithCats = vertice->parent->parentsWithCats + 1;
		}
		else
		{
			vertice->parentsWithCats = 1;
		}
	}

	if (vertice->parentsWithCats > m)
	{
		return;
	}
	if (vertice->hijos.size() == 0)
	{
		answ++;
		return;
	}
	for (ll i = 0; i < vertice->hijos.size(); i++)
	{
		solve(vertice->hijos[i]);
	}
}
Node *arbol[100001];

bool estaEnElArbol[100001] = {false};

map<ll, vector<ll>> nodos;

void creaArbol(ll level)
{
	for (ll i = 0; i < nodos[level].size(); i++)
	{
		if (!estaEnElArbol[nodos[level][i]])
		{
			struct Node *vecino = new Node(nodos[level][i], arbol[level]);
			arbol[nodos[level][i]] = vecino;
			arbol[nodos[level][i]]->parent->hijos.push_back(arbol[nodos[level][i]]);
			estaEnElArbol[nodos[level][i]] = true;
			creaArbol(nodos[level][i]);
		}
	}
}

int main()
{
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
	{
		ll aux;
		cin >> aux;
		if (aux == 1)
		{
			isACat[i + 1] = true;
		}
	}
	struct Node *casa = new Node(1, NULL);
	arbol[1] = casa;
	estaEnElArbol[1] = true;
	for (ll i = 0; i < n - 1; i++)
	{
		ll aa, bb;
		cin >> aa >> bb;
		ll a = min(aa, bb), b = max(aa, bb);
		nodos[a].push_back(b);
		nodos[b].push_back(a);
	}
	creaArbol(1);

	solve(arbol[1]);
	cout << answ << endl;
	return 0;
}