#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[100];
     cin.getline(arr,100,'$');  // the last parameter is called delimiter it is used to stop reading the array
     // the two parameters stored are location and capacity
     //cin will end when it find a space 
     //getline will print all the elements without considering the space 
     cout<< strlen(arr)<<endl;
cout<< arr <<endl;
}