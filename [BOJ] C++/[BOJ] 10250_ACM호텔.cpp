#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int t, h, w, n;
    int floor, room, guest;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>h>>w>>n;
        floor=n%h;
        if(floor==0){ //floor==0 이면 꼭대기층
            room=n/h;
            guest=h*100+room;
        }
        else{
            room=n/h+1;
            guest=floor*100+room;
        }
        
        cout<<guest<<"\n";
    }
}

/*n이 h의 배수라면 floor가 0이나오고, room이 소수점없이 딱 떨어지기 때문에
  floor=n/h=0 이라는 것은 꼭대기층을 의미하므로 h*100을,
  room이 소수점 없이 딱 떨어지면 +1을 해서 옆칸으로 넘길 필요가 없기에 n/h만 수행한다.
  room이 소수점이 있다는 것은 n/h이 곧 소수점을 가진 값이 나온다는 것이고
  그 말은 예를들어, 1.xx 일 때, 뒷자리가 1인 호수 칸을 다 먹고 그 다음 칸이라는 의미기에 n/h+1 을 해주는 것이다.
*/