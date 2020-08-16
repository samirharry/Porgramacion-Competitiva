#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

ll arr[5] = {2, 3, 4, 10, 40};

// Recursive Implementation

ll binarySearchRecursive(ll l, ll r, ll x)
{
	// Mientras exista un intervalo valido para buscar el elemento x
	if (r >= l)
	{
		// La posicion pivot es la que se encuentra en el medio del intervalo
		ll mid = (l + r) / 2;
		//Si el valor buscado, se encuentra en esta posición entonces ya encontramos el valor buscado
		if (arr[mid] == x)
			return mid;
		// Si no la encontramos entonces se puede encontrar en subarray izquierdo
		if (arr[mid] > x)
			return binarySearchRecursive(l, mid - 1, x);
		// Si no se encuentran en ese subarray, pues entonces tiene que estar en el subarray derecho
		return binarySearchRecursive(mid + 1, r, x);
	}
	// Si llegamos a esta parte es porque el valor no se encuentra en el array
	return -1;
}

// Implementación Iterativa

ll binarySearchIterative(ll l, ll r, ll x)
{
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
		{
			r = mid - 1;
			continue;
		}
		l = mid + 1;
	}

	return -1;
}

int main()
{
	int n = 5;
	int x = 10;
	cout << binarySearchIterative(0, n - 1, x) << endl;
	return 0;
}