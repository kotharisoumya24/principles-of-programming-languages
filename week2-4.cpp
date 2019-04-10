#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char n;
	cout<<endl<<"Enter a character ";
	n= getche();
	
	if(n>=65 && n<=90)
	cout<<endl<<"capital character";
	
	if(n>=97 && n<=122)
	cout<<endl<<"lowercase character";
	
	if(n>=48 && n<=57)
	cout<<endl<<"digit";
	
	if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127)
	cout<<endl<<"special character";

	return 0;	
}


