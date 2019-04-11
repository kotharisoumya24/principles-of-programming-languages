#include<iostream>
using namespace std;

int main()
{
	int arr[100],even=0,odd=0,positive=0,negative=0,n;
	cout<<"enter the no of array elemants";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		
	}
	
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>0)
		positive++;
		if(arr[i]<0)
		negative++;
		if((arr[i]%2)==0)
		even++;
		if((arr[i]%2)!=0)
		odd++;
		
		
	}
	
	cout<<"\nnumber of positive elements "<<positive++;
	cout<<"\nnumber of negetive elements "<<negative++;
	cout<<"\nnumber of even elements "<<even;
	cout<<"\nnumber of odd elements "<<odd++;
}
