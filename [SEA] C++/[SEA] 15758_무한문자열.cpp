#include<iostream>
#include<string>
using namespace std;

int main(void){
    int t, cnt, same=1; //same이 1이면 yes, 0이면 no
    cin>>t;

    for(int i=0;i<t;i++){
        same=1;
        string str1, str2, str11, str22;
        cin>>str1>>str2;

        if(str1.size()>str2.size()){
            str1=str1+str1;
            cnt=(str1.size()/str2.size())+1;
            for(int j=0;j<cnt;j++)
                str22+=str2;
            for(int k=0;k<str1.size();k++){
                if(str1[k]!=str22[k]){
                    same=0;
                    break;
                }
            }

            if(same==1) cout<<"#"<<i+1<<" yes\n";
            else cout<<"#"<<i+1<<" no\n";
        }
        else{
            str2=str2+str2;
            cnt=(str2.size()/str1.size())+1;
            for(int j=0;j<cnt;j++)
                str11+=str1;
            for(int k=0;k<str2.size();k++){
                if(str11[k]!=str2[k]){
                    same=0;
                    break;
                }
            }

            if(same==1) cout<<"#"<<i+1<<" yes\n";
            else cout<<"#"<<i+1<<" no\n";
        }

    }
    return 0;
}