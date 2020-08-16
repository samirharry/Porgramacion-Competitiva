
#include <iostream>
 
using namespace std;
 
int main(){
	long long m,n,a,p,q,r;
	cin >>m>>n>>a;
	
	p=m/a;
	if (m%a!=0){
		p=p+1;
	}
	q=n/a;
	if (n%a!=0){
		q=q+1;
	}
	r=p*q;
	cout<<r<<endl;
	return 0;
}