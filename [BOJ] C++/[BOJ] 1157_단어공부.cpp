#include<iostream>
#include<string>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string s;
    cin>>s;
    //아스키코드 A:65, a:97

    /*1. 빈도수 체크*/
    int alp[26]={0,};
    for(int i=0;i<s.size();i++)
    {
        if((int)s[i]<97) //대문자이면
            alp[(int)s[i]-65]++; 
        else //소문자이면
            alp[(int)s[i]-97]++;
    }

    /*빈도수 체크 2*/
    /*
    int up=65, low=97;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<26;j++)
        {
            if((int)s[i]==up || (int)s[i]==low)
                alp[j]++;
            up++;
            low++;
        }
        up=65;
        low=97;
    }
    */

   //2. 가장 많이 나온 알파벳 구하기
    int max=alp[0], max_index=0, same=-1;
    for(int i=1;i<26;i++)
    {
        if(alp[i]>max)
        {
            max=alp[i];
            max_index=i;
        }
        else if(alp[i]==max)
            same=alp[i];
    }

    //3. 가장 많이 나온 알파벳 출력 (단, 여러 개일 경우 ? 출력)
    if(max==same)
        cout<<"?";
    else //인덱스 0은 대문자 A:65
        cout<<(char)(max_index+65);

    return 0;
}