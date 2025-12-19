// It is used to maje our pointer point nothing

#include<iostream>
using namespace std;
int main()
{
    int x =10;
    int *xptr = &x;
    xptr = 0;
    int *yptr = NULL;
    int *zptr = 0;
    
    if(xptr == NULL)
    {
        cout<<"yes it is a null pointer";
    }
}