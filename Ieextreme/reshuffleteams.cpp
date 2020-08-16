#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

ll cantidades[4] = {0};

char minChar = ('E');

bool isTomado[4] = {false};



ll stringComparision( string a, string b){
	ll answ =0;
	for(ll i=0;i<(ll) a.size();i++){
		if(a[i]!= b[i]) answ++;
	}	
	return answ;
}

void formatWord(string &a)
{
	ll cant = (ll)a.size();
	ll it = cant - 1;
	if (a[0] != a[it])
		return;
	for (ll i = it; i >= 0; i--)
	{
		if (a[it - 1] == a[it])
			continue;
		else
		{
			it = i - 1;
			break;
		}
	}
	string aux = a.substr(it - 1, cant - it + 1);
	string aux1 = a.substr(0, it - 1);
	aux.append(aux1);
	a = aux;
	return;
}

void passMayus(string &cadena)
{
	for (ll i = 0; i < (ll)cadena.size(); i++)
	{
		cadena[i] = toupper(cadena[i]);
	}
}

ll cantDiferences(string aux)
{
	minChar =  'E';
	ll n = aux.size();
	cantidades[0] = 0, cantidades[1] = 0, cantidades[2] = 0, cantidades[3] = 0;
	for (ll i = 0; i < n; i++)
	{
		minChar = min(minChar, aux[i]);
		cantidades[aux[i] - 'A']++;
	}
	if (cantidades[0] == n || cantidades[1] == n || cantidades[2] == n || cantidades[3] == n)
	{
		return 0;
	}
	formatWord(aux);
		ll iterMinChar = 0;
	for (ll i = 0; i < n; i++)
	{
		if (aux[i] == minChar)
		{
			iterMinChar = i;
			break;
		}
	}
	string auxss = aux.substr(iterMinChar, n - iterMinChar + 1);
	if (iterMinChar > 0)
	{
		auxss.append(aux.substr(0, iterMinChar));
	}
	aux = auxss;
	string abcd = "ABCD";
	ll answ = 100001;
	while (true)
	{
		string comparator = "";
		if (abcd[0] != 'A')
		{
			break;
		}
		for(ll i=0;i<4;i++){
			for( ll j=0;j< cantidades[ abcd[i] -'A'] ;j++ ){
				comparator.push_back(abcd[i]);
			}
		}
		ll answAux =  stringComparision(aux,comparator);
		answ = min(answ,answAux);
		next_permutation(abcd.begin(), abcd.end());
	}
	return answ;
}

int main()
{
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		string aux;
		cin >> aux;
		passMayus(aux);
		cout << cantDiferences(aux) << endl;
	}
	return 0;
}