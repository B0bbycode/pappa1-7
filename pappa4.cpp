#include <iostream>

using namespace std;

int main(void){
	
	int a,b,c;
	/*a = 2;
	b = 3;
	c = 1;*/
	
	cout<<"input value for a \t";
	cin>>a;
	
	cout<<"input value for b \t";
	cin>>b;
	
	cout<<"input value for c \t";
	cin>>c;
	
	c+= a+b++;
	a= --c+b++;
	
	cout<<"\n";
	cout<<"value for a is \t"<<a<<"\n";
	cout<<"value for b is \t"<<b<<"\n";
	cout<<"value for c is \t"<<c<<"\n";
	
	return 0;
	
}
