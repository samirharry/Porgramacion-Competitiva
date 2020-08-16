#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

void solve(string origin, string target)
{
	if (origin == target)
	{
		cout << 0 << endl;
		return;
	}
	ll horizontal = target[0] - origin[0], vertical = target[1] - origin[1];
	if (horizontal == 0)
	{
		cout << abs(vertical) << endl;
		if (vertical > 0)
			for (ll i = 0; i < vertical; i++)
				cout << "U" << endl;
		else
			for (ll i = 0; i < abs(vertical); i++)
				cout << "D" << endl;
	}
	else if (vertical == 0)
	{
		cout << abs(horizontal) << endl;
		if (horizontal > 0)
			for (ll i = 0; i < horizontal; i++)
				cout << "R" << endl;
		else
			for (ll i = 0; i < abs(horizontal); i++)
				cout << "L" << endl;
	}
	else if (vertical > 0 && horizontal > 0)
	{
		if (abs(horizontal) > abs(vertical))
		{
			cout << abs(horizontal) << endl;
			for (ll i = 0; i < abs(vertical); i++)
			{
				cout << "RU" << endl;
			}
			for (ll i = 0; i < abs(horizontal) - abs(vertical); i++)
			{
				cout << "R" << endl;
			}
		}
		else
		{
			cout << abs(vertical) << endl;
			for (ll i = 0; i < abs(horizontal); i++)
			{
				cout << "RU" << endl;
			}
			for (ll i = 0; i < abs(vertical) - abs(horizontal); i++)
			{
				cout << "U" << endl;
			}
		}
	}
	else if (vertical < 0 && horizontal > 0)
	{
		if (abs(horizontal) > abs(vertical))
		{
			cout << abs(horizontal) << endl;
			for (ll i = 0; i < abs(vertical); i++)
			{
				cout << "RD" << endl;
			}
			for (ll i = 0; i < abs(horizontal) - abs(vertical); i++)
			{
				cout << "R" << endl;
			}
		}
		else
		{
			cout << abs(vertical) << endl;
			for (ll i = 0; i < abs(horizontal); i++)
			{
				cout << "RD" << endl;
			}
			for (ll i = 0; i < abs(vertical) - abs(horizontal); i++)
			{
				cout << "D" << endl;
			}
		}
	}
	else if (vertical > 0 && horizontal < 0)
	{
		if (abs(horizontal) > abs(vertical))
		{
			cout << abs(horizontal) << endl;
			for (ll i = 0; i < abs(vertical); i++)
			{
				cout << "LU" << endl;
			}
			for (ll i = 0; i < abs(horizontal) - abs(vertical); i++)
			{
				cout << "L" << endl;
			}
		}
		else
		{
			cout << abs(vertical) << endl;
			for (ll i = 0; i < abs(horizontal); i++)
			{
				cout << "LU" << endl;
			}
			for (ll i = 0; i < abs(vertical) - abs(horizontal); i++)
			{
				cout << "U" << endl;
			}
		}
	}
	else if (vertical < 0 && horizontal < 0)
	{
		if (abs(horizontal) > abs(vertical))
		{
			cout << abs(horizontal) << endl;
			for (ll i = 0; i < abs(vertical); i++)
			{
				cout << "LD" << endl;
			}
			for (ll i = 0; i < abs(horizontal) - abs(vertical); i++)
			{
				cout << "L" << endl;
			}
		}
		else
		{
			cout << abs(vertical) << endl;
			for (ll i = 0; i < abs(horizontal); i++)
			{
				cout << "LD" << endl;
			}
			for (ll i = 0; i < abs(vertical) - abs(horizontal); i++)
			{
				cout << "D" << endl;
			}
		}
	}
}
int main()
{
	string origin, target;
	cin >> origin >> target;
	solve(origin, target);
	return 0;
}