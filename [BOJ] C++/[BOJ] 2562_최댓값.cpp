#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int arr[9];

    cin>>arr[0];
    int max=arr[0];
    int max_num=1; //최댓값 번호 (초기 1번으로 설정 필수)
    
    for(int i=1;i<9;i++)
    {
        cin>>arr[i];
        if(max<arr[i])
        {
            max=arr[i];
            max_num=i+1;
        }
    }
    cout<<max<<"\n"<<max_num;

    return 0;
}