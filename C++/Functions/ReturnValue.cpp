#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int a=25;
    int b=45;
    int res=add(a,b);
    cout<<res<<endl;
    return 0;
}