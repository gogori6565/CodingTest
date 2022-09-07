#include<iostream>
using namespace std;

int main(void){

    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int sugar;
    cin>>sugar;

    if(sugar%5==0){
        cout<<sugar/5;
    }
    else{
        for(int i=sugar/5;i>=0;i--){
            if((sugar-5*i)%3==0){
                cout<<i+(sugar-5*i)/3;
                return 0;
            }
        }
        cout<<"-1";
    }
}