#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int c, n, arr[1000],count=0;
    double sum=0.0,avg;
    cin>>c;

    for(int i=0;i<c;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            sum+=arr[j];
        }
        avg=sum/n; //평균

        for(int k=0;k<n;k++)
        {
            if(arr[k]>avg)
                count++;
        }

        cout<<fixed;
        cout.precision(3); //소수점 셋째자리 고정
        cout<<(double)count/n*100<<"%"<<"\n";

        count=0;
        sum=avg=0.0;
    }
    return 0;
}