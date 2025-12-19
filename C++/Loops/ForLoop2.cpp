// Read the N numbers and find the sum of numbers which are even

#include<iostream>
using namespace std;
int main()
{
    int sum;
    int n;
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
        int no;
        cin>>no;
    
if(no%2==0)
    {
sum=sum+no;
    }
}
cout<<"sum of even "<<sum<<endl;
}