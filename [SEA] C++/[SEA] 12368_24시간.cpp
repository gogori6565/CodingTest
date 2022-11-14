#include<iostream>
using namespace std;

int main(void){
    int t; cin>>t;
    int a, b, sum;

    for(int i=0;i<t;i++){
        cin>>a>>b;
        sum=a+b;

        if(sum<24) cout<<"#"<<i+1<<" "<<sum<<"\n";
        else cout<<"#"<<i+1<<" "<<sum%24<<"\n";
    }
}