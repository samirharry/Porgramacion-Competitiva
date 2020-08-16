#include <bits/stdc++.h>
#define debug(x) cout << #x << " => " << x << endl;
#define debugArray(x, n)       \
	for (ll i = 0; i < n; i++) \
		cout << #x << "[" << i << " => " << x[i] << endl;

using namespace std;

typedef long long ll;

string solve(string &s)
{
	ll n = (ll)s.size();
	bool isBad[26] = {false};
	ll i = 0, j = 0, cant;
	set<char> answ;
	vector<vector<ll>> auxil(26);
	while (i < n)
	{
		while (s[j] == s[i])
		{
			j++;
		}
		if ((j - i) % 2 != 0)
			answ.insert(s[i]);
		i = j;
	}
	string answer = "";
	for (auto it = answ.begin(); it != answ.end(); it++)
	{
		answer.push_back(*it);
	}
	return answer;
}

int main()
{
	ll n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}