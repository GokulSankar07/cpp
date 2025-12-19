#include<iostream>
using namespace std;

void reverse(int *arr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<< arr[i]<<",";
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[n-1-i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
}