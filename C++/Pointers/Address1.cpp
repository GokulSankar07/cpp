#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    cout <<arr<<endl;
    cout <<&arr<<endl;

    //to get address of the charecter

    char letter = 'A';
    cout<< (void *) & letter<< endl; // this will produce the address of the letter
    cout<< &letter <<endl;           // this will produce the letter itself
    return 0;
}