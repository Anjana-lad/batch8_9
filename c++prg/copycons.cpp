//copy constructor: classname (const classname &obj_name)
#include<iostream>
using namespace std;
class value{
    public:
    int a,b;
    public:
    value(int a1,int b1){
        a=a1;
        b=b1;
    }
    value( const value &v){
        a=v.a;
        b=v.b;
    }
    int show(){
        cout<<"Addition of numbers:"<<a+b<<endl;
    }
};
int main(){
    value v1(10,20);
    value v2=v1;
    v2.show();

}