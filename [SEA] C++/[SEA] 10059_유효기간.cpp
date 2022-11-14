#include<iostream>
#include<string>
using namespace std;

int main(void){
    int t, num1, num2;
    cin>>t;

    for(int i=0;i<t;i++){
        string str;
        cin>>str;

        num1=(str[0]-48)*10+(str[1]-48);
        num2=(str[2]-48)*10+(str[3]-48);

        if((num1>0 && num1<=12) && (num2>0 && num2<=12)) cout<<"#"<<i+1<<" AMBIGUOUS\n";
        else if(num1<=12 && num1>0) cout<<"#"<<i+1<<" MMYY\n";
        else if(num2<=12 && num2>0) cout<<"#"<<i+1<<" YYMM\n";
        else cout<<"#"<<i+1<<" NA\n";
    }
}