#include<iostream>
using namespace std;
void PlayMusic(int songId , int duration)
{
cout<<"Playing Song "<<songId<<"for"<<duration<<"Minutes"<<endl;
}

int main()
{
    PlayMusic(1,4);
    PlayMusic(2,3);
    PlayMusic(3,2);
    return 0;
}