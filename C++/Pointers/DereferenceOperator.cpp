// * is used as a binary operator(i.e multiplication)
// * is used to create pointer variable and also be used as the dereference operator
// Pointers can be used to access the varriable that it point 

#include<iostream>
using namespace std;
int main()
{
int x=10;
int * xptr = &x;
cout << x << endl; //10
cout << xptr << endl;// address
cout << &xptr << endl; // address of pointer bucket
cout<< *xptr << endl; // 10 eg of dereference operator
cout<< *(&x) <<endl; //10
}