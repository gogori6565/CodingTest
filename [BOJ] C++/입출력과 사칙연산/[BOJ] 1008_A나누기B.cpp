#include<iostream>
using namespace std;

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    double a,b;
    cin>>a>>b;

    cout << fixed;
    cout.precision(9);
    cout<<a/b;
}