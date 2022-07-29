#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    string s1, s2;
    cin>>s1>>s2;

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    vector<string> sum;
    int up=0,idx=0; //up : 자리올림수

    for(int i=0;i<(s1.size()>s2.size()?s1.size():s2.size());i++){
        if(i+1<=s1.size()&&i+1<=s2.size()){
            sum.push_back(to_string((((s1[i]-'0')+(s2[i]-'0'))+up)%10));
            up=(((s1[i]-'0')+(s2[i]-'0'))+up)/10;
        }
        else if(i+1>s1.size()){ //s1이 길이가 더 짧은 정수인 경우
            sum.push_back(to_string(((s2[i]-'0')+up)%10));
            up=((s2[i]-'0')+up)/10;
        }
        else{
            sum.push_back(to_string(((s1[i]-'0')+up)%10));
            up=((s1[i]-'0')+up)/10;
        }
    }

    reverse(sum.begin(),sum.end());
    if(up!=0) cout<<up; //혹시나 마지막 계산에서 자리올림수가 발생한 경우 출력해줘야하니까
    while(1){
        if(sum.size()<=idx) break; //벡터의 끝에 도달했으면 정지
        cout<<sum[idx];
        idx++;
    }
}