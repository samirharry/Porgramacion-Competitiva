#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{

		ll a, b, c;
		cin >> a >> b >> c;
		ll left_friend = min({a, b, c});
		ll right_friend = max({a, b, c});
		ll middle_friend = a + b + c - left_friend - right_friend;
		if (right_friend == left_friend && right_friend == middle_friend)
		{
			cout << 0 << endl;
			continue;
		}
		if (left_friend < middle_friend)
			left_friend++;
		else if (left_friend == middle_friend)
		{
			left_friend++;
			middle_friend++;
		}
		if (right_friend == left_friend && right_friend == middle_friend)
		{
			cout << 0 << endl;
			continue;
		}

		if (right_friend > middle_friend)
		{
			right_friend--;
		}
		else if (right_friend == middle_friend)
		{
			right_friend--;
			middle_friend--;
		}
		ll answ = abs(right_friend - middle_friend) + abs(right_friend - left_friend) + abs(left_friend - middle_friend);
		cout << answ << endl;
	}
	return 0;
}