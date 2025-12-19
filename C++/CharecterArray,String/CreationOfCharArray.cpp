#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[100]="hello";
   
    strcpy(arr , "hi everyone"); // strcpy is used to replace elements in array

    cout<<"Length of the string "<< strlen(arr) <<endl; // strlen is used to print the length if the array
    cout<<"Size of the Array is " << sizeof(arr) <<endl;

    // strcpy(destination , source )

    cout<< arr <<endl;
}