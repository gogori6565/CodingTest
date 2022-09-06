#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int t, count=0,sum=0;
    cin>>t;

    char ch[80];
    for(int i=0;i<t;i++)
    {
        cin>>ch;
        for(int j=0;j<strlen(ch);j++)
        {
            if(ch[j]=='O') //O일 경우
            {
                count++;
                sum+=count;
            }
            else //X일 경우
                count=0;
        }
        cout<<sum<<"\n";
        sum=0;
        count=0;
    }
    return 0;
}