#include <bits/stdc++.h>

#define debug(x) cout << #x << "  " << x << endl;
#define debugArray(x, n)       \
    for (ll i = 0; i < n; i++) \
        cout << #x << "[" << i << "] => " << x[i] << endl;

typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
    int x, y, z;
    char answ;
    cin >> x >> y >> z;
    if (z == 0)
    {
        if (x > y)
            answ = '+';
        else if (x < y)
            answ = '-';
        else
            answ = '0';
    }
    else
    {
        if (x > y)
        {
            answ = (z<(x-y))?'+':'?';
        }
        else if (x < y)
        {
            answ = (z<(y-x))?'-':'?';
        }
        else
        {
            answ = '?';
        }
    }
    cout << answ << endl;
    return 0;
}