#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"\nEnter x and y";
    cin>>x>>y;
    float result = (x+y)/ (x-y);
    cout<<"\n Result of expression is: "<<result;
    return 0;
}
