//compute the factorials of N

#include<iostream>
using namespace std;
int factorial(int N)
{
    int ans = 1;
    for(int i=1; i<=N; i++)
    {
        ans = ans * i;
    }
}
int main()
{
    cout<< factorial(5)<<endl;
}