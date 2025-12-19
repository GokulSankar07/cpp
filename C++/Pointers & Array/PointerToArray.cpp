#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4}

    cout << arr <<endl;
    cout << arr + 1 << endl;

    int *p1 = arr;
    p1++;

    cout<< p1 <<endl;  // this refer to the index 1 element 
    cout<<(*p1) << endl; // this refer to the content of the index 1 by using dereference operator  
 
    int (*ptr)[10]; // this point to the entier array
    ptr = &arr;

    cout << "Pointer to Array " << ptr << endl;

    cout << ptr << endl; // this refere to the address of the index 0
    cout << ptr+1 << endl; // this refer to the address of the 40th element 0

    return 0;
}