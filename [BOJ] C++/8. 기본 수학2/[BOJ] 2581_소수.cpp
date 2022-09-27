#include<iostream>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,m,sum=0,min,cnt=0;
    cin>>n>>m;

    for(int i=n;i<=m;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){ //소수가 아닌 경우
                cnt++;
                break; 
            }
        }
        if(cnt==0&&i!=1){ //소수인 경우
            if(sum==0) min=i;
            sum+=i;
        }
        cnt=0;
    }
    if(sum==0) cout<<"-1";
    else cout<<sum<<"\n"<<min;
}