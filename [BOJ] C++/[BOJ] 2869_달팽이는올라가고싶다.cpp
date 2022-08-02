#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int a,b,v;
    cin>>a>>b>>v;

    cout<<int(ceil((double)(v-a)/(double)(a-b)))+1;
}