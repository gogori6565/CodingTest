#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    unsigned int a,b,c;
    cin>>a>>b>>c;

    if(b>=c){ //손익분기점 존재 X
        cout<<"-1";
        return 0;
    }

    cout<<a/(c-b)+1;
}

/*
A만원 : 고정비용, B만원 : 가변비용, C만원 : 노트북 가격
손익분기점 : 총 수입 > 총 비용(A+B)

x : 손익분기점이 발생하는 판매량
총 수입 = 총 비용 이 같아지는 시점의 x를 구하자
cx = a + bx
방정식을 풀면
x = a/(c-b)
여기서 x는 총 수입 = 총 비용 이 같아지는 시점이기 때문에 수익이 나려면 여기서 1을 더한 값이어야한다.
따라서, x = a/(c-b)+1 가 올바른 x, 손익분기점이다.
*/