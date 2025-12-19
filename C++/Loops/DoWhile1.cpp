//Read number untill i don't get the negative number

#include<iostream>
using namespace std;
int main()
{
    int number;
    do{
cin>>number;// here any number is taken as input
cout<<number;// here the given number is printed in the output
    }
    while(number>=0);//if the number is a negative number then compilation is stopped
}
