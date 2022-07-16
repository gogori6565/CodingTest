#include<iostream>
using namespace std;

int main(void)
{
    int t; //test case
    cin>>t;

    int* arr1=new int[t];
    int* arr2=new int[t];

    for(int i=0;i<t;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }

    for(int i=0;i<t;i++)
    {
        cout<<arr1[i]+arr2[i]<<endl;
    }

    delete[] arr1;
    delete[] arr2;

    return 0;
}