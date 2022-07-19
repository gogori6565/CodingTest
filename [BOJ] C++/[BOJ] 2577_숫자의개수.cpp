#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int arr[10]={0,}; //0~9 숫자 카운트 배열
    int a,b,c;
    cin>>a>>b>>c;
    int mul=a*b*c;

    for(int i=mul;i>0;i/=10)
        arr[i%10]+=1;

    for(int i=0;i<10;i++)
        cout<<arr[i]<<"\n";
    
    return 0;
}

/* int -> string 으로 형변환하여 str 배열로 접근
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int arr[10]={0,}; //0~9 숫자 카운트 배열
    int a,b,c;
    cin>>a>>b>>c;

    string mul=to_string(a*b*c); //정수 -> 문자열 변환

    for(int i=0;i<10;i++)
    {
        int num=mul[i]-'0';
        for(int j=0;j<10;j++)
            if(num==j) arr[j]+=1;
    }

    for(int i=0;i<10;i++)
        cout<<arr[i]<<"\n";

    return 0;
}
*/