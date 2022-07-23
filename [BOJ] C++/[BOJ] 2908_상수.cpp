#include<iostream>
#include<string>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string a, b;
    int na=0, nb=0;
    cin>>a>>b;

    na+=(a[2]-'0')*100; nb+=(b[2]-'0')*100;
    na+=(a[1]-'0')*10; nb+=(b[1]-'0')*10;
    na+=(a[0]-'0'); nb+=(b[0]-'0');

    if(na>nb) cout<<na;
    else cout<<nb;

    return 0;
}