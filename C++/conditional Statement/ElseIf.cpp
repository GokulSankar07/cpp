//if one condition is true the conditions below the will not be excicuted 

#include<iostream>
using namespace std;
int main()
{
int mark;
cin>>mark;
if(mark>90)
{
    cout<<"Grade O"<<endl;
}
else if(mark > 80)
{
 cout<<"Grade A"<<endl;
}
else if(mark >70)
{
    cout<<"Grade B"<<endl;
}
else if (mark > 60)
{
    cout<<"Grade C"<<endl;
}
}