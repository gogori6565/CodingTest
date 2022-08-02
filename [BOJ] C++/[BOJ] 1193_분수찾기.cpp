#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int num, den; //분자, 분모
    int x,sum=1,i=0;
    cin>>x;

    while(1){
        if(sum>x) break;
        i++;
        sum+=i;
    } //i는 줄번호

    if(i%2==0){ //짝수라면
        num=1+(x-(sum-i)); //(sum-i) : 줄번호의 초항(첫번째 수)
        den=i-(x-(sum-i)); //x-(sum-i) : 초항으로부터 x가 얼마나 떨어져있는지 (줄번호)의 몇번째 수 인가!
    }
    else{ //홀수라면
        num=i-(x-(sum-i));
        den=1+(x-(sum-i));
    }
    cout<<num<<"/"<<den;
}