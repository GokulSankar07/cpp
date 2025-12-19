//read N numbers and find their sum
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    int sum=0;
    while(i<=n)
    {
int no;
cin>>no;
sum=sum+no;
i++;
    }
    cout<<sum<<endl;
}