//nested class 
#include<iostream>
using namespace std;
class A{
    public:
        int show(){
            cout<<"This is class A outer class."<<endl;
        }
        class B{
            public:
            int show1(){
                cout<<"This is class B inner class."<<endl;
            }
        };
};
int main(){
    A a;
    a.show();
    A :: B b;
    b.show1();
}                                  