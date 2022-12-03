#include <iostream>
using namespace std;
int main(){
int aray1[5];
int aray2[5];
int i;
int temp;
cout<<"pleas enter 5 number for aray1:";
for(i=0 ; i<5 ; i++){
	cin>>aray1[i];
	}
	cout<<"pleas enter 5 number for aray2:";
	for(i=0 ; i<5 ; i++){
		cin>>aray2[i];
	}
	for(i=0 ; i<5 ; i++){
		temp=aray1[i];
		aray1[i]=aray2[i];
		aray2[i]=temp;
	}
	cout<<"aray1:\n";
	for(i=0 ; i<5 ; i++){
	 cout<<aray1[i]<<"_";
	 }
	 cout<<"aray2:\n";
	 for(i=0 ; i<5 ; i++){
	  cout<<aray2[i]<<"_";
	  }
}