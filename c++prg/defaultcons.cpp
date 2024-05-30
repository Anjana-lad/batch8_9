//default constructor
#include<iostream>
using namespace std;
class Points{
     public:
     int singing;
     int dance;
     public:
     Points(){  //default conctructor
        singing=5;
        dance=20;
     }
     int show(){
        cout<<"Singing:"<<singing<<"\n"<<"dance:"<<dance<<endl;
     }  
};
int main(){
    Points p,p1;
    p.show();
    p1.show();
}