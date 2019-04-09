#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter a number ";
  cin >> x;
	for(int i=2;i<=x;i++)
	{
		bool isPrime = true;
  		for(int j= 2; j <= i / 2; j++)
  		{
      		if(i % j == 0)
      		{
          		isPrime = false;
          		break;
      		}
  		}
  		if (isPrime)
      	cout << i<<" ";
	}
  return 0;
}
