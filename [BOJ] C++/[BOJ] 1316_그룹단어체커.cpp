#include<iostream>
using namespace std;

//find() 함수 안쓰고
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n, cnt=0,k;
    cin>>n;
    string str;

    for(int i=0;i<n;i++){
        cin>>str;
        bool check=false;
        if(str.size()>=3){
            for(int j=0;j<str.size()-2;j++){
                for(int k=j+2;k<str.size();k++){
                    if(str[j]!=str[j+1]&&str[j]==str[k]){
                        check=true;
                        break;
                    }
                }
            }
            if(check) cnt++;
        }
    }
    cout<<n-cnt;
}

/* find()함수 사용
int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n,cnt=0; //여기서 cnt는 그룹 단어가 아닌 것들의 개수!
    cin>>n;
    string str;

    for(int i=0;i<n;i++){
        cin>>str;
        if(str.size()>=3){
            for(int j=0;j<str.size()-2;j++){
                    if(str[j]!=str[j+1]){ //문장에서 앞 글자와 뒷 글자가 다른 위치에서
                        if(str.find(str[j],j+2)!=std::string::npos){ //앞글자가 문장 내에 또 있다면
                            cnt++;
                            break;
                        }
                    }
            }
        }
    }

    cout<<n-cnt;
}
*/