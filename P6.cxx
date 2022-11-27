#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"pleas enter division:";
	cin>>m;
	cout<<"pleas enter divisor:";
	cin>>n;
	int quotient;
	int remainder;
	while(n<=m){
		remainder=m-n;
		quotient++;
	}
	
	cout<<remainder;
	cout<<quotient;
	}