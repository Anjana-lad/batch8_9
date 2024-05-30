//function overriding : dynamic binding /late binding.
#include<iostream>
using namespace std;
class A{
    public:
 virtual int show(){
        cout<<"This is class A"<<endl;
    }
};
class B :public A{
    public:
    int show(){
        cout<<"This is class B\n";
    }
};
int main(){
     B b; 
    A ab;
    A *a;
    a=&ab;  //class A ref
    a->show();
    a=&b;  //class b ref
    a->show();
}