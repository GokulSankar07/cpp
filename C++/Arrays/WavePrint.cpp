//passing a 2D array to function
// wave print

#include<iostream>
using namespace std;
void wavePrint(int arr[][100],int rows, int cols)
{
    for(int col=0; col<cols; col++)
    {
        if(col%2==0)
        {
            for(int row=0; row<= rows-1; rows++)
            {
                cout<< arr[row][col]<<" , " ;
            }
        }
        else
        {
            for(int row=row-1; row>=0; row--)
            {
                cout<< arr[row] [col] << " ";
            }
        }
    }
}
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
    wavePrint(arr , rows , cols);
    return 0;
}