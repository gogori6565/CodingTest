#include<iostream>
using namespace std;

int main(void)
{
    //start_hour(minute), need_minute
    int sh, sm, nm, hour, minute;
    cin>>sh>>sm>>nm;
    
    minute=(sm+nm)%60;
    hour=sh+(sm+nm)/60;

    if(hour>=24)
        hour-=24;

    cout<<hour<<" "<<minute;
}