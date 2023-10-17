#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	//Datatype : syntax: Dataname variable;
	int a;
	long b;
	float c;
	double d;
	char e;
	string f;  //C++ only
	
	//Asign value to variable after declare 
	a=1;
	b=1000;
	c=2.22;
	d=555.33;
	e='A'; // char can only store one character
	f="Hello world"; // string can store many character
	
	//Output all the value
		//For C++
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
			cout<<d<<endl;
			cout<<e<<endl;
			cout<<f<<endl;
		//For C 
			printf("\n\n\n%d\n",a);
			printf("%ld\n",b);
			printf("%f\n",c);
			printf("%lf\n",d);
			printf("%c\n",e);
			
			//for C we can use char[] (char array) to store more than one character
			char g[10]="abcdefghi";// [10] it mean that variable g can store 9 character because it start with 0 so character<10
			printf("%s\n",g);
		
	
	return 0;
	getch();
	
}