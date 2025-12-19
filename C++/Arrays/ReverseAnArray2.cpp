#include<iostream>
using namespace std;
void print (int * myArray , int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<myArray[i]<<" ";
    }
    cout<<endl;
}
void reverseArrayInplace(int*arr,int n)
{
    int s= 0;
    int e= n-1;

    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
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
     reverseArrayInplace(arr,n);
     print(arr,n);
}

