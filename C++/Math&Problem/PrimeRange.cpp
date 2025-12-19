#include<iostream>
using namespace std;

bool isPrime(int n )
{
for(int i=2; i<=n; i++)
{
    if(n%i == 0)
    {
        return false;
    }
    return true;
}
}
 bool isPrimeOptimised(int n)
 {
for(int i=2; i*i<=n; i++)
{
   if( n%i==0)
   {
    return false;
   } 
}
return true;
 }

void printPrime(int A , int B)
{
    for(int i=A; i<=B; i++)
    {
        if(isPrimeOptimised(i))
        {
            cout<<i<<",";
        }
    }
}

int main()
{
int n;
cin>> n;
cout << (isPrime(n) ? " prime " : "Non-Prime");
return 0;
}