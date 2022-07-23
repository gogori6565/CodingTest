#include<iostream>
#include<string>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string s;
    getline(cin,s); //공백도 입력받음 (개행에서 끝)

    int cnt=0;
    for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]==' ')
            cnt++;
    }

    if(s==" ")
        cout<<cnt;
    else
        cout<<cnt+1;

    return 0;
}

//문장에서 앞, 뒤 띄어쓰기 배제하고 문장의 단어의 개수는 (띄어쓰기(공백))+1 이다.