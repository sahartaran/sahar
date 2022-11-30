#include <iostream>
using namespace std;
int main(){
	int aray[10];
	int i;
	float max;
	float min;
	float avg;
	cout<<"pleas enter 10 number:";
	for(i=0 ; i<10 ; i++){
	 cin>>aray[i];
	 if(i==0){
	 	max=aray[i];
	 	min=aray[i];
	 }
	 
	 if(aray[i]>max){
	 	max=aray[i];
	 }
	 if(aray[i]<min){
	 	min=aray[i];
	 	}
	 	 }
	 	 cout<<"max is:"<<max;
	 	 cout<<"min is:"<<min;
	 	
	 	avg=(max+min)/2;
	 	cout<<"(max+min)/2=";
	 	cout<<"avg is:"<<avg;
		}
	