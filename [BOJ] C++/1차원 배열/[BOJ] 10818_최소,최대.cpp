#include<iostream>
#include<algorithm> //sort() 함수
#include<vector>
using namespace std;

//vector 사용
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,num;
    cin>>n;
    vector<int>arr;

    for(int i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }

    sort(arr.begin(),arr.end()); //오름차순
    cout<<arr.front()<<" "<<arr.back();

    return 0;
}

/* 배열 사용하지 않기
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n, max, min,in, out;
    cin>>n;

    cin>>in;
    max=min=in;

    for(int i=1;i<n;i++)
    {
        cin>>in;
        if(max<in) max=in;
        if(min>in) min=in;
    }

    cout<<min<<" "<<max;
    return 0;
}
*/

/* sort() 함수 사용
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[1000001];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr, arr+n); //오름차순 정렬
    cout<<arr[0]<<" "<<arr[n-1];

    return 0;
}
*/
 
 /* 동적할당 사용
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,max,min;
    cin>>n;
    int* arr=new int[n];

    cin>>arr[0];
    max=min=arr[0];

    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
    }

    cout<<min<<" "<<max;
    delete[] arr;
    return 0;
}
*/