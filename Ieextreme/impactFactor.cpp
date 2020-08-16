#include <bits/stdc++.h>
#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++)  cout<<#x<<"["<<i<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

struct article{
	int year;
	int articleCount;
};

struct publication{
	string publicationTitle;
	string  publicationNumber;
	vector<article> articleCounts;
};
void iterArreglo(vector <publication> journal ,independent_bits_engine){

}
int main(){
	ll n;
	cin>>n;
	cin.ignore();
	string publicationsOnReport;
	getline(cin,publicationsOnReport);
	vector <publication> publicaciones;
	stack<char> validator;
	ll tam = publicationsOnReport.size();
	ll it =0;
	while( it <= tam){
		if(publicationsOnReport[it]  == "["){
			while(publicationsOnReport[it] != "]");
		}
	}

	return 0;
}