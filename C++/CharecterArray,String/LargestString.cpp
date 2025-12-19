#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char current[1000]; // this depend upon the problem

    int n;
    cin>>n;

cin.get();
 
char largest[1000];
int len = 0;

for(int i=0; i<n ; i++)
{
    cin.getline(current,1000,'\n');
    int currentLength = strlen(current);
    if(currentLength > len)
    {
        len = currentLength;
        strcpy(largest , current ); // destination and source 

    }
}
cout<<largest<<endl;
cout<<len<<endl;
}