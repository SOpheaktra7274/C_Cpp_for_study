#include<iostream> // library for C++ 
using namespace std;
#include<stdio.h>  // library for C
#include<conio.h>

int main(void){ // main function is needed=

	int a,b;
	printf("Input a: "); scanf("%d",&a); // function for input (C)
	cout<<"Input b: "; cin>>b;        // function for input (C++)
	
	printf("a="); printf("%d\n",a); // function for output (C)
	cout<<"b=";cout<<b;          // function for output (C++)
	
	getch();
	return 0;
}