#include<iostream>
#include<iomanip>
using namespace std;
int p=30;  //global variable
int main(){
    int p=20; //local variable
    int a=10;
    cout<<"P="<<p<<endl<<"A="<<a<<endl<<"::p="<<::p<<endl<<"A+p="<<a+p<<endl<<"a+::p="<<a+::p<<endl;

    cout<<"A="<<setw(5)<<a<<endl;
}