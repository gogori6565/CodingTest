#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string a, b, na, nb;
    cin>>a>>b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if(a>b) cout<<a;
    else cout<<b;

    return 0;
}

/* 풀이 3. string으로 받은 수를 거꾸로한 string을 만들어 `max() 함수`로 비교
#include<algorithm> 필요

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string a, b, na, nb;
    cin>>a>>b;

    for(int i=2;i>=0;i--)
    {
        na+=a[i];
        nb+=b[i];
    }

    cout<<max(na,nb);
    return 0;
}
*/


/*풀이 2. string으로 받은 수를 맨 뒷자리부터 한 자리씩 비교
int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string a, b;
    cin>>a>>b;

    for(int i=2;i>=0;i--)
    {
        if(a[i]>b[i])
        {
            cout<<a[2]<<a[1]<<a[0];
            break;
        }
        else if(a[i]<b[i])
        {
            cout<<b[2]<<b[1]<<b[0];
            break;   
        }
    }

    return 0;
}
*/

/*풀이 1. string으로 받은 수를 거꾸한 정수(int) 만들어 비교
int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string a, b;
    int na=0, nb=0;
    cin>>a>>b;

    na+=(a[2]-'0')*100; nb+=(b[2]-'0')*100;
    na+=(a[1]-'0')*10; nb+=(b[1]-'0')*10;
    na+=(a[0]-'0'); nb+=(b[0]-'0');

    if(na>nb) cout<<na;
    else cout<<nb;

    return 0;
}
*/