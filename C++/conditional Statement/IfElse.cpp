// #include<iostream>
// using namespace std;
// int main()
// {
// int a=123456;
// if(a=a)
// {
//     cout<<"invalid user name"<<endl;
// }
// else
// {
//     cout<<"valid user name"<<endl;
// }
// return 0;
// }



#include<iostream>
using namespace std;

int main() {
    int money;
    cout << "Enter the money you want to withdraw: ";
    cin >> money;

    if (money < 10000) 
    {
        cout << "Insufficient balance"<<endl;
    } 
    else
    {
        cout << "Enter the Pin"<<endl;
    }
    if(money > 10000)
    {
    cout<<"Transaction Successful"<<endl;
    }
    else
    {
    cout<<"Transaction Failed"<<endl;
    }
    return 0;
    }