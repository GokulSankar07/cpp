//default value for parameters

#include<iostream>
using namespace std;
void playMusic (int songId=1 ,float duration=10 )
//duration=10 is pre defined parameters that comes into action when the argument is not provided for that parameter
{
    cout<<"playing Song " << songId << "for"<< duration <<"Minutes"<<endl;
}
int main()
{
    playMusic(1,3.2);
    playMusic(2,4);
    playMusic(4);
    return 0;
}