  //array is a collection of elements of same type
  #include<iostream>
using namespace std;
int main()
{
int arr[100]={1,2,83,4}; // 100 elements and then assigned value to first 4 elements

cout<<arr[0]<<endl; //acessing oth element
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
cout<<sizeof(arr)<<endl; //400
cout<<sizeof(int)<<endl; //4
cout<< sizeof(arr) /sizeof(int); //100
int n;
//print all the elements iof the array
for(int i=0; i<=n-1; i++)// i represent index 0 
// And n-1 represend the last index
{
    cout<< arr[i] << ",";
}
}