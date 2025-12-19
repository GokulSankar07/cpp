#include<iostream>
using namespace std;
int main()
{
//typecasting means change of resultant data type

//integer and integer -> integer
cout<<(5/3)<<endl;

//integer and float -> float
cout<<(5/3.0)<<endl;

//char and int ->integer
char letter='A';
cout<<letter<<endl; // the value of 'A' is 65
cout<<letter+1<<endl;// now 65+1 is 66
letter=letter+1;
cout<<letter<<endl;// here 66 belong to the char 'B'

//boolean and integer
cout<<true + 5 <<endl;// the value of true is 1 hence 1+5 is 6


}
