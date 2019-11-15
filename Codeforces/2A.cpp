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
	ll m = -1001;
	map<string, ll> scores;
	map<string, bool> hasScore;
	vector<pair<string, ll>> turns;
	for (ll i = 0; i < n; i++)
	{
		string s;
		ll sco;

		cin >> s >> sco;
		turns.push_back(make_pair(s, sco));
		scores[s] += sco;
	}
	for (auto score : scores)
	{
		m = max(m, score.second);
	}
	for (auto score : scores)
	{
		if (score.second == m)
		{
			hasScore[score.first] = true;
		}
		else
		{
			hasScore[score.first] = false;
		}
	}

	scores.clear();
	for (pair<string, ll> turn : turns)
	{

		scores[turn.first] += turn.second;
		if (scores[turn.first] >= m && hasScore[turn.first])
		{
			cout << turn.first << endl;
			break;
		}
	}

	return 0;
}