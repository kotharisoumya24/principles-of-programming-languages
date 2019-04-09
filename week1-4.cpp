#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a three digit number :";
	cin>>num;
	int sum=0;
	while(num!=0)
	{
		int digit=num%10;
		sum= sum + digit;
		num=num/10;
	}
	cout<<"\nsum of the digits : "<<abs(sum);
	return 0;
}
