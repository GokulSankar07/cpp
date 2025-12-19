#include<iostream>
using namespace std; //simple calculater code
int main()
{
     char op;
     int a,b;
     cin>>a>>op>>b;

     switch(op)
     {
        case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
         case '*':cout<<(a*b)<<endl;
        break;
         case '/':cout<<(a/b)<<endl;
        break;
        default : cout<<"Enter a valid input";
     }
}