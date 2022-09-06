#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,x=1,sum=1;
    cin>>n;

    while(1){
        if(sum>=n) break;
        sum+=6*x;
        x++;
    }
    cout<<x;
}