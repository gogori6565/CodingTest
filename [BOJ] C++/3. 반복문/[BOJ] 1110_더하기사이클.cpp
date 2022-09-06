#include<iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int n,fn,sum,count=0;
    cin>>n;
    fn=n;  //처음 n

    do{
        sum=(n/10)+(n%10);
        n=(n%10)*10+(sum%10);
        count++;    
    }while(fn!=n);

    cout<<count<<"\n";

    return 0;
}