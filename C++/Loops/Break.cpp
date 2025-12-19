//It is used to terminate certain loops based on certain conditions
//If there is a nested loop break statement take you out of the nearest 
#include<iostream>
using namespace std;
int main()
{
    int cal=0;
int call=10;
    while(cal<50)
    {
        cout<<"Running and Burning"<<cal<<endl;
cal=cal+1;
        if(cal==call)
        {
break;
        }
        }
        cout<<"Workout Completed"<<cal<<endl;
}