#include<iostream>
using namespace std;

/* 방법 1
int main(void)
{
    int a,b;
    cin>>a>>b;

    if(a>=-10000&&a<=10000&&b>=-10000&&b<=10000)
    {
        if(a>b)
        cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else
            cout<<"=="<<endl;
    }
    else
        return 0;
}
*/

//방법 2
int main(void)
{
    int a,b;
    cin>>a>>b;

    (a!=b)?((a>b)?cout<<">"<<endl:cout<<"<"<<endl):cout<<"=="<<endl;
}