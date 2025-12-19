#include<iostream>
using namespace std;
int main()
{
    int a=28;
    int *aptr = &a;
    aptr = 0;
      if(aptr==NULL)
      {
        cout<<"It is a null pointer";
      }
      return 0;
}