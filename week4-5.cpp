#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num,a[50],count=0,n;
	
	cout<<"enter the size of the list ";
	cin>>n;
	
	cout<<"enter the number whose frequency is to be checked ";
	cin>>num;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==num)
		count++;
	}
	
	cout<<"number of times"<<num<<" appeared is: "<<count;
	
}
