#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int price, p_num, obj, o_num, sum=0;
    cin>>price>>p_num;

    for(int i=0;i<p_num;i++){
        cin>>obj>>o_num;
        sum+=obj*o_num;
    }

    if(price==sum) cout<<"Yes";
    else cout<<"No";
}