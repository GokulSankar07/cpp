#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr<<endl; // this produce address but in this case this provide content of the array
    //this will continue producing the elements untill it finds zero
    // zero can also be called as null charecter

    char *ptr =arr;
    cout<< (void *) ptr << endl;

    // the arr produce an output of elements of the array while represented with void* or int* it produce address of the array

char b[]={'x','y','z'};
//charecter array terminates only it finds a zero
//So we introduce zero at the end of the array 

cout<<sizeof(b)<<endl;
cout<<b<<endl;

char c[]="hello";
// incase of string they defaultly end with a null charecter so we dont need to put null charecter at the end

return 0;
}