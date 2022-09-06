#include<iostream>
using namespace std;

int main(void)
{
    int h,m,hour,minute;
    cin>>h>>m;

    if(m>=45)
    {
        minute=m-45;
        hour=h;
    }
    else //m<45
    {
        minute=(60-45)+m;
        
        if(h==0)
            hour=23;
        else
            hour=h-1;
    }

    cout<<hour<<" "<<minute<<endl;

    return 0;
}

/*
변수 : 기존 h,m 과 출력 hour, minute
이 문제에서는 크게 두 가지를 고려해야한다.
1) m이 45보다 같더나 클 경우 / 2) m이 45보다 작은 경우.

1)의 경우,
hour=h 그대로이고,
minute은 (m-45)분이다.

2)의 경우,
기존 m이 45보다 작아서 (분)이 마이너스 값이 나오므로
시간(h)에서 60분을 가져와 계산하므로,
minute=(60-45)+m
hour=h-1
이 된다.
이때!! 0시의 경우, h-1은 23시가 되어야하므로,
0시만 예외로 h-1이 23시가 되도록 고려해주어야한다.
*/