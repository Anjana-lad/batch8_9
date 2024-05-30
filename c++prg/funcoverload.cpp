//function overloading - compile time polymorphism;
#include<iostream>
using namespace std;
int add_fun(int a,int b){
    int res;
    res=a+b;
    cout<<"Result="<<res<<endl;
}
int add_fun(int a,int b,int c){
     int res;
    res=a+b+c;
    cout<<"Result="<<res<<endl;
}
int add_fun(double a,double b){
    double res;
    res=a+b;
    cout<<"Result="<<res<<endl;
}
int main(){
    add_fun(12,20);
    add_fun(10.3,40.5);
    add_fun(42,5,7);
}