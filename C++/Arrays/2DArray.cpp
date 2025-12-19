#include<iostream>
using namespace std;
int main()
{
    //2D array
    int arr[100] [100];
    
    // rows and columns
    int rows,cols;
    cin>> rows >>cols;

    //read a 2D array

    for(int i=0; i<rows; i++)
    {
for (int j=0; j<cols; j++)
{
    cin>>arr[i][j];
}
    }
    //print a 2D arrar
        for(int i=0; i<rows; i++)
    {
for (int j=0; j<cols; j++)
{
    cout<<arr[i][j]<<",";
}
cout<<endl;
    }
    return 0;
}

// Row major form - the memory is allocated lineraly 