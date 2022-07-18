#include<iostream>
using namespace std;

int main(void)
{
    int num1,num2,num3,num4,num5,num6;
    cin>>num1>>num2;

    num3=num1*(num2%10);
    num4=num1*((num2%100)/10);
    num5=num1*(num2/100);
    num6=num1*num2;

    cout<<num3<<endl<<num4<<endl<<num5<<endl<<num6<<endl;
}