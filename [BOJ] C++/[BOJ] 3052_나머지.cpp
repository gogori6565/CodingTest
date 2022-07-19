#include<iostream>
using namespace std;

//나누는 값이 42면 나올 수 있는 나머지는 0~41 총 42개
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int arr[10], rem[42]={0,}, count=0;  //입력배열, 나머지배열, 카운트
    // for(int i=0;i<10;i++)
    //     cin>>arr[i];
    
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        int num=arr[i]%42; //나머지
        if(rem[num]==0) //처음 나온 나머지라면
        {
            count++;
            rem[num]++;
        }
    }
    cout<<count;
    return 0;
}