#include<iostream>
using namespace std;

int main(void){
    int t, d, h, m, sum=0;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>d>>h>>m;
        
        if(d==11 && h<11){
            cout<<"#"<<i+1<<" -1\n";
            break;
        }
        else if(d==11 && h==11 && m<11){
            cout<<"#"<<i+1<<" -1\n";
            break;
        }

        sum=(d-11)*24*60+(h-11)*60+(m-11);
        cout<<"#"<<i+1<<" "<<sum<<"\n";       
    }
}