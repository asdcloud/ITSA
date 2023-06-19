#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    double a;
    cin>>a;
    a*=a;
    a*=100;     //¥|±Ë¤­¤J
    a+=5;
    a/=100;
    cout<<fixed<<setprecision(1)<<a<<endl;
}
