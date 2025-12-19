//pointer is a variable that holds address of another variable
// '*' is used to declare a pointer

#include<iostream>
using namespace std;
int main ()
{
    int x =47;
    cout<< &x << endl;

    int *xptr =&x;
    cout << xptr <<endl;

    float y=2;
    cout<< &y << endl;
    float *yptr = &y; 
    cout<< yptr <<endl;
}
