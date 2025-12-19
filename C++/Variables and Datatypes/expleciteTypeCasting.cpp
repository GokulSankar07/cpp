#include<iostream>
using namespace std;
int main()
{
   
  cout<< (float)5/3 <<endl;  //here we declare the datatype to be printed

//integer and float -> float
cout<<(int) 5/3<<endl;

char letter='A';
cout<<letter<<endl; 
cout<<(char)(letter+1)<<endl; //here the normal output is int but we declare the output as char
letter=letter+1;
cout<<(int)letter<<endl;

cout<<(bool)(5+1) <<endl;
}