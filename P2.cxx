#include <iostream>
#include <cmath>
using namespace std;
int main() {
int x,y,z;
cout<<"pleas enter numbet:";
cin>>x;
cout<<"pleas enter number:";
cin>>y;
cout<<"pleas enter number:";
cin>>z;
int numerator;
numerator=((x-y)*(x+z));
cout<<"((x-y)*(x+z))=";
cout<<numerator;
int denominator;
denominator=(pow(x+y+z,2)+1);
cout<<"(pow(x+y+z,2)+1)";
cout<<denominator;
int a;
a=numerator%denominator;
cout<<"numerator%denominator=";
cout<<a;
}