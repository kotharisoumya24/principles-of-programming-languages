#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h;
    cout<<"\nEnter values of a,b,c,d,e,f,g,h";
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    float w=a+b;
    float x=c+d-e;
    float y=f-g;
    float z=w/x;
    float final= z*y;
    cout<<"\n Result of expression is: "<<final;
    return 0;
}
