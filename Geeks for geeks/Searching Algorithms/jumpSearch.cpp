#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

ll jumpSearch(ll arr[], ll x, ll n)
{
	ll step = sqrt(n);
	ll prev = 0;

	while (arr[min(step, n) - 1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}

	while (arr[prev]< x)
	{
		prev++;
		if(prev == min(step,n)) return -1;
	}

	if(arr[prev] == x){
		return prev;
	}
	return x;
}

int main()
{
	ll n = 6;
	ll arr[n] = {1, 1, 2, 3, 5, 9};
	ll x = 1;
	cout << jumpSearch(arr, x, n) << endl;
	return 0;
}