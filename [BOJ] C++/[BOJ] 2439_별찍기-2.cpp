#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            (i+j<=n)?cout<<" ":cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

/* 방법2
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
*/