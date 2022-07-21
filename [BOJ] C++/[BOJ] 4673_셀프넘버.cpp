#include<iostream>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int dn;
    int arr[10001]={0,};

    for(int i=1;i<=10000;i++)
    {
        dn=i;
        for(int j=i;j>0;j/=10)
            dn+=j%10;

        if(dn<=10000) //dn의 값이 10000 넘어가면 배열 크기를 넘어가니까 오류, 10000 이하인 경우만 체크해주면 된다.
            arr[dn]++;
    }

    for(int i=1;i<=10000;i++)
    {
        if(arr[i]==0)
            cout<<i<<"\n";
    }
}