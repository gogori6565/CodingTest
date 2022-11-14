#include<iostream>
#include<string>
using namespace std;

int GCD(int a, int b){
    if(b==0) return a;
    return GCD(b,a%b);
}

int LCM(int a, int b){
    return a*b/GCD(a,b);
}

int main(void){
    string str1, str2, str11, str22;
    cin>>str1>>str2;

    //최소공배수
    int min=LCM(str1.size(), str2.size());

    for(int i=0;i<min/str1.size();i++) str11+=str1;
    for(int i=0;i<min/str2.size();i++) str22+=str2;

    if(str11==str22) cout<<"1";
    else cout<<"0";
}

/*
int main(void){
    int cnt, same=1; //same이 1이면 yes, 0이면 no
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

        if(same==1) cout<<"1";
        else cout<<"0";
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

        if(same==1) cout<<"1";
        else cout<<"0";
    }
    return 0;
}
*/