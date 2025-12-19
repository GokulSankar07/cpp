// its a another name for a existing variable
// & operater is used declare variable in reference variable

#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;

cout<<x<<endl;
cout<<y<<endl;
x++;
y++;
}
