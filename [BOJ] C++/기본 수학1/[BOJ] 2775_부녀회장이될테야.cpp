#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int t,k,n,*arr=NULL,sum=0;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>k>>n;
        arr=new int[n];
        //배열 초기화
        for(int base=0; base<n; base++){
            arr[base]=base+1; //1~n으로 0층 초기화
        }

        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){ //1호는 어차피 1, 2호부터 합하기
                arr[j]+=arr[j-1];
            }
        }

        cout<<arr[n-1]<<"\n";
    }

    delete[] arr;
}