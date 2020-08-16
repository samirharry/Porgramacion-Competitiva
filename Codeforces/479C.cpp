#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll n;
	cin >> n;
	pair<ll, ll> examenes[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> examenes[i].first;
		cin >> examenes[i].second;
	}
	sort(examenes, examenes + n);
	ll dateAux = 0;
	for (ll i = 0; i < n; i++)
	{
		if (examenes[i].second < dateAux)
		{
			dateAux = examenes[i].first;
		}
		else
		{
			dateAux = examenes[i].second;
		}
	}
	cout << dateAux << endl;

	return 0;
}