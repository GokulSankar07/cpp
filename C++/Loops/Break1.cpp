#include<iostream>
using namespace std;
int main()
{
    //check the given N is prime or not
int i;
int N=7;
for(i=2; i<N; i++)
{
  if(N%i==0)
  {
    break;
  }
}
if (i==N)
{
    cout<<"Prime"<<endl;
}
else{
    cout<<"Not a Prime"<<endl;
}
}