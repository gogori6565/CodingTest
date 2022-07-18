#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int a,b;

    while(1)
    {
        cin>>a>>b;
        if(cin.eof()==true) break;
        cout<<a+b<<"\n";
    }
    return 0;
}

/*
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int a,b;

    while(cin>>a>>b) //while문 조건에 cin을 직접 넣어 비정상적인 입력을 거를 수 있음
    {
        cout<<a+b<<"\n";
    }
    return 0;
}
*/