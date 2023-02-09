#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"enter values: "<<endl;
 cin>>a>> b >> c;
 //cout<< n<< endl;
if (a>b && a>c )
cout<<"a is greatest "<<endl;
else if (b>a && b>c)
cout<<"b is greatest"<<endl;
else
cout<<"c is greatest"<<endl;
}