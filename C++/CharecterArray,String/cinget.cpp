#include<iostream>
using namespace std;
int main()
{
    // cin will not read blank space 
    // wheras cin.get will read all elements including blank space 
char ch;
    ch = cin.get();

if(ch == ' ')
{
    cout<<"you entered a space"<<endl;
}
else if(ch == '\n')
{
    cout<<"you entered a new line"<<endl;
}
else
{
cout<<"you entered a char "<< ch <<endl;
}
return 0;
}