#include<iostream>
#include<math.h> 
 
using namespace std;
 
int main()
{
	float num1,num2,a,b,c,d,imaginary,real;
	cout<<"For Quadratic Equation ax^2+bx+c=0"<<" enter values of a,b and c:";
	cin>>a>>b>>c;
	
	d=(b*b)-(4*a*c);
	
	if(d>0)
	{
	
		num1=(-b+sqrt(d))/(2*a);
		num2=(-b-sqrt(d))/(2*a);
		cout<<"\nRoots are "<<num1<<" and "<<num2;
	}
	else if(d==0)
		{
			
			num1=num2=-b/(2*a);
			cout<<"\nRoots are "<<num1<<" and "<<num2;
		}
	else
	   {
			real = -b/(2*a);
            imaginary = sqrt(-d)/(2*a);
        	cout<<"\nRoots are "<<real<<"+"<<imaginary<<"i and "<<real<<"-"<<imaginary<<"i";
		}
 
	return 0;
}
