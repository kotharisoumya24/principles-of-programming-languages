#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n, num[50], largest, second;
   cout<<"Enter number of elements: ";
   cin>>n;
   for(int i=0; i<n; i++){
        cin>>num[i];
   }
   
   sort(num,num+n);
   
   for(int i=0; i<n; i++){
        cout<<num[i]<<"\n";
   }
   
   for (int i=n-2; i>=0; i--){
		if (num[i]<num[n-1]){
		cout<<"second largest element is"<<num[i];
		break;	}
   }
   
   return 0;
}

