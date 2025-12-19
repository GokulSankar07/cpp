#include<iostream>
#include<algorithm>
using namespace std;
 void print(int * myArray,int n)
 {
    for(int i=0; i<n; i++)
    {
        cout<< myArray[i]<<",";
    }
    cout<<endl;
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
    sort (arr + 1 , arr + n);
    print(arr,n);
 }