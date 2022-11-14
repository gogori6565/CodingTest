#include<iostream>
using namespace std;

//방법2
int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n;
    cin>>n;

    while(n>1){
        for(int i=2;i<=n;i++){
            if(n%i==0){
                n/=i;
                cout<<i<<"\n";
                break;
            }
        }
    }
}

/* 방법1
//소인수분해 : n의 약수 중에서 소수인 숫자
int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,cnt=0;
    vector<int>arr;
    vector<int>arr2;
    cin>>n;

    //arr 배열에 n의 약수 중 소수인 수 저장
    for(int i=2;i<=n;i++){
        if(n%i==0){ //약수면 -> 소수인지
            for(int j=1;j<=i;j++){
                if(i%j==0) cnt++;
            }
            if(cnt==2)
                arr.push_back(i);
        }
        cnt=0;
    }

    //n의 약수 중 소수인 수로 n을 소인수분해하는 과정
    while(n!=1){
        for(int i=0;i<arr.size();i++){
            if(n%arr[i]==0){
                n/=arr[i];
                arr2.push_back(arr[i]);
                break;
            }
        }
    }

    //소인수분해 값 출력
    sort(arr2.begin(),arr2.end()); //오름차순
    for(int i=0;i<arr2.size();i++)
        cout<<arr2[i]<<"\n";
}
*/