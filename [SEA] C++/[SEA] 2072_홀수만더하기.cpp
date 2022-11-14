#include<iostream>
using namespace std;

int main(void){
    int t,num, ten=0, cnt=0, sum=0;
    cin>>t;

    for(int i=0;i<=t*10;i++){
        if(ten==10){
            cnt++;
            ten=0;
            cout<<"#"<<cnt<<" "<<sum<<"\n";
            sum=0;
        }
        cin>>num;
        if(num%2!=0) //홀수면
            sum+=num;
        ten++;
    }
}