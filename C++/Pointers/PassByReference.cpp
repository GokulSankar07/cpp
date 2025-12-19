//used to pass the actual oject or bucket


#include<iostream>
using namespace std;
void incMoney(int *moneyPtr) // this is a reference variable
// Any changes made in this will reflect at at the main function
{
  cout<<moneyPtr<<endl;
  (*moneyPtr)= 2 * (*moneyPtr);
  cout<<(*moneyPtr)<<endl;
}
int main()
{
    int money =10;
    incMoney(&money);
    cout<<"Main :"<<money<<endl;
}