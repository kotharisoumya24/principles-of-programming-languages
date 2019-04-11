#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cout<<"enter the number of elements of array1 ";
	cin>>m;
	cout<<"enter the number of elements of array2 ";
	cin>>n;
	
	int a[50],b[50];
	
	cout<<"enter the elements in array1"<<endl;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	
	cout<<"enter the elements in array2"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		a[m+i]=b[i];
	}
	
	sort(a+1,a+(m+n));
	cout<<"sorted output"<<endl;
	for(int i=1;i<=m+n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
