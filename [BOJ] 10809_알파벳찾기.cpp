#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string str;
    cin>>str;

    int arr[26]; //알파벳 26개 배열
    fill_n(arr,26,-1);

    //소문자 a 아스키코드 97
    int alp=97;
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<26;j++)
        {
            if((int)str[i]==alp)
                if(arr[j]==-1)
                    arr[j]=i;
            
            alp++;
        }
        alp=97;
    }

    for(int i=0;i<26;i++)
        cout<<arr[i]<<" ";

    return 0;
}