#include<iostream>
#include<string>
using namespace std;

int main(void){
    int t; cin>>t;
    int exp;

    for(int i=0;i<t;i++){
        string str; cin>>str;
        exp=str.size()-1;
        
        if(str.size()>=3){
            if(str[2]-'0'>=5){
                if(str[0]-'0'==9 && str[1]-'0'==9){
                    str[0]='1';
                    str[1]='0';
                    exp+=1;
                }
                else if(str[1]-'0'==9){
                    str[0]+=1;
                    str[1]='0';
                }
                else{
                    str[1]+=1;
                }
            }
        }
        
        cout<<"#"<<i+1<<" "<<str[0]<<"."<<str[1]<<"*10^"<<exp<<"\n";
    }
}

/*
문자열로 받았으니까 비교할 때 -'0' 주의,
값을 넣을 떄도 0을 넣는 게 아니라 '0'으로 문자를 넣어야함 유의
*/