#include<iostream>
#include<string>
#include<vector>
using namespace std;

// 1. string 함수 - find(), replace() 활용
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    vector<string> croatia={"c=","c-","dz=","d-","lj","nj","s=","z="};
    int index;
    string str;
    cin>>str;

    for(int i=0;i<croatia.size();i++){
        while(1){ //크로아티아 알파벳이 더이상 문자열에 없을 때까지 반복
            index=str.find(croatia[i]);
            if(index==string::npos) //찾는 문자가 없는 경우
                break;
            str.replace(index,croatia[i].size(),"*");
        }
    }

    cout<<str.size();
}

/* 2. 문자열 함수 사용하지 않고 푼 코드
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int i=0,cnt=0;
    string str;
    cin>>str;

    //위 목록에 없는 알파벳은 한 글자씩 센다.
    //d= 같이 기호가 말도 안되게 나오는 경우 X
    while(i<str.size()){
        switch(str[i]){
            case 'd':
                //z만 검사하면 안돼. dza 일 경우 세 개 카운트임
                if(str[i+1]=='z'&&str[i+2]=='='){ //세글자
                    cnt++; i+=3; break;
                }
            case 'c':
                if(str[i+1]=='-'){ 
                    cnt++; i+=2; break;
                }
            case 's':
            case 'z':
                if(str[i+1]=='='){
                    cnt++; i+=2; break;
                }
                else{ //dj일 경우 두 개 카운트해야하니까 여기서 한 번 스탑
                    cnt++; i++; break;
                }
            case 'l':
            case 'n':
                if(str[i+1]=='j'){
                    cnt++; i+=2; break;
                }
            default:
                cnt++; i++; break;
        }
    }

    cout<<cnt;
    return 0;
}
*/