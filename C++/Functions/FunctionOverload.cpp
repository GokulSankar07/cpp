// It is a language feature especially with object oriented programming language
// used to create multiple fn with same name 

//rules 
// Should have diffrent data type of  parameters
// Or shoukd have diffrent number of parameter

#include<iostream>
using  namespace std;
int area(int l , int b)
{
return l*b;  
}
int area (int l)
{
    return l*l;
}
int main()
{
    cout<< area(5)<<endl;
    cout<< area(4,5)<<endl;
    
}





