#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;

void escribirDiscarded(vector<ll> &discarded){
        ll i=0;
        ll n= (ll) discarded.size();
        cout<<"Discarded cards:";
        for(auto card:discarded){
            if(i==0) cout<<" ";
            cout<<card; 
            if(i< (n-1) ){
                cout<<", ";
            }
            i++;
        }
        cout<<endl;
}

void escribirRemaining(ll &card){
    cout<<"Remaining card: ";
            cout<<card;
             cout<<endl;
}   

deque<ll> nuevoMazo(ll n){
    deque<ll> cards;
    for(ll i=1;i<=n;i++){
        cards.push_front(i);
    }
    return cards;
}
void solve(ll &n){
    deque<ll> cards = nuevoMazo(n);
    vector<ll> discarded;
    ll remaining;
    while(cards.size()>1){
        ll lastCard = cards.back();
        discarded.push_back(lastCard);
        cards.pop_back();
        lastCard = cards.back();
        cards.pop_back();
        cards.push_front(lastCard);
    }
    remaining = cards.back();
    escribirDiscarded(discarded);
    escribirRemaining(remaining);
}


int main(){
    ll n;
    while (true)
    {
        cin>>n;
        if(n ==0) break;
        solve(n);
    }
    
    return 0;
}