#include <bits/stdc++.h>

#define debug(x) cout << #x << " => " << x << endl
#define debugArray(x, n)       \
    for (ll i = 0; i < n; i++) \
    cout << #x << "[" << i << "] => " << x[i] << endl

using namespace std;

typedef long long ll;

const ll MX = 1000;

struct Graph
{
    ll pa[MX] = {0};
    bool isVis[MX] = {false};
    void reset(){
        for(ll i=0;i<MX;i++) isVis[i] = false;
    }
    void addPa(ll origin, ll target)
    {
        pa[origin] = target;
    }
    void dfs(ll origin){
        isVis[origin] = true;
        ll hijo = pa[origin];
        if(isVis[hijo]){
            cout<<hijo+1<<" ";
            return;
        }
        dfs(hijo);
    }
};

Graph G;

int main()
{
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++){
        ll aux;
        cin>>aux;
        G.pa[i] = aux-1;
    }
    for(ll i=0;i<n;i++){
        G.reset();
        G.dfs(i);
    }
    return 0;
}