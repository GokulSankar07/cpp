// prt ++ - Take me to the next cell (address)
// ptr -- - Take me to the previous cell ( address )
// This process of accessing memory location is possible only in array

#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4};
    
    cout << arr <<endl; // this provide address of the array
    int * ptr = arr ;

    for(int i=0; i<4; i++)
    {
        cout<< ptr << "Data "<< *(ptr) << endl;
        ptr = ptr + 1;
    }

    ptr=arr; //reset to begining of the array
    for(int i=0; i<10; i++)
    {
        cout << *(arr + i)<<","; // *(arr+i) is a dereference operator
    }
    return 0;

    int *ptr1 = arr +1;
    int *ptr2 = arr +7;

    cout<< ptr2 - ptr1 << endl; // this provide the number of boxes between the ptr1 and ptr2 
}