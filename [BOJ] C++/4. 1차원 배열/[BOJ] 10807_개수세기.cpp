#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int t; cin>>t;
    vector<int>v;
    int num, cnt=0;

    for(int i=0;i<t;i++){
        cin>>num;
        v.push_back(num);
    }
    cin>>num; //찾을 숫자
    for(int i=0;i<t;i++){
        if(v[i]==num)
            cnt++;
    }
    cout<<cnt;
}