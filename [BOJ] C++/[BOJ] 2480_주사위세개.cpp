#include<iostream>
using namespace std;

int main(void)
{
    int num1, num2, num3, money;
    cin>>num1>>num2>>num3;

    if(num1==num2 && num2==num3)
        money=10000+num1*1000;
    else if(num1==num2 || num2==num3 || num1==num3)
    {
        if(num1==num2 || num1==num3)
            money=1000+num1*100;
        else
            money=1000+num2*100;
    }
    else
        money=(num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3))*100;

    cout<<money<<endl;

    return 0;
}