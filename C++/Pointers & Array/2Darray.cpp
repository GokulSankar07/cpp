#include<iostream>
using namespace std;
int main()
{
    int arr [3] [4] ={ {1,2,3,4,},{5,6,7,8},{9,10,11,12} }

    cout << "Arr" << arr << endl;
    cout << "Address of 0,0" << &arr[0][1] << endl;
    cout<< "Address of 0,1"<< &arr [0][1] << endl;
    cout<< "Arr + 1" << Arr + 1 << endl;
    cout<<"Address of 1,0"<< &arr [1][0] << endl;
    return 0;

}
