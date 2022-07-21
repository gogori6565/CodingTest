#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,index=0,count=0;
    cin>>n;
    int arr[1001]={0,};
    int num[3];

    for(int i=1;i<=n;i++)
    {
        if(i<100)
            arr[i]++;
        else if(i==1000)
            break;
        else
        {
            for(int j=i;j>0;j/=10)
                num[index++]=j%10;
            
            if((num[0]-num[1])==(num[1]-num[2]))
                arr[i]++;
        }
        index=0;
    }

    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=0)
            count++;
    }
    
    cout<<count;
    return 0;
}