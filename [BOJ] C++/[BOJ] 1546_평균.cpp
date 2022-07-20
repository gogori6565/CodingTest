#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n;
    float sum=0.0;
    cin>>n;
    float arr[1000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr, arr+n); //오름차순 max는 arr[n-1]
    
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/arr[n-1]*100;
        sum+=arr[i];
    }

    cout<<sum/n;
    return 0;
}