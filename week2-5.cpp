#include<iostream>
using namespace std;

int main()
{
	int cp,sp;
	cout<<"enter cost price and selling price:";
	cin>>cp>>sp;
	if(sp>cp)
	cout<<"\nprofit earned:"<<((sp-cp)/cp)*100<<"%";
	else if(cp>sp)
	cout<<"\nloss incured"<<((cp-sp)/cp)*100<<"%";
	else
	cout<<"\nno profit no loss";
}
