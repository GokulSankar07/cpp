#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4};
int *p1 = arr;

int *ptr [10] ;
ptr = &arr;
    cout << *p1 <<endl;
    cout << p1 << endl;

    cout << ptr << endl;
    return 0;
}