#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
// find the average of 5 integers and print the output in 4 decimal place
int a,b,c,d,e;

cin>>a>>b>>c>>d>>e;
int sum = a+b+c+d+e;

cout<<fixed<<setprecision(4)<<(float)(sum/5)<<endl;  // <<fixed<<setprecision(4) this represent the no.of decimal place to be printed
}
