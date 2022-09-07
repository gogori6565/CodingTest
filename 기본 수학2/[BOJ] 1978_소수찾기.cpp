#include<iostream>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,num,cnt=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num;
        if(num==1) cnt++;
        for(int j=2;j<num;j++){
            if(num%j==0){ //나누어 떨어지게 하는 수가 1과 자기 자신을 제외하고 있는 경우
                cnt++;
                break;
            }
        }
    }
    cout<<n-cnt;
}