#include<iostream>
#include<string>
using namespace std;

int main(void){
    int t, alpha=97, cnt=0;
    cin>>t;
 
    for(int i=0;i<t;i++){
        alpha=97; cnt=0;
        string str;
        cin>>str;

        for(int j=0;j<str.size();j++){
            if(str[j]!=alpha){
                break;
            }
            alpha++;
            cnt++;
        }
        cout<<"#"<<i+1<<" "<<cnt<<"\n";
    }
}