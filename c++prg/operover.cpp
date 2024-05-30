//operator overload in polymorphism
//syntax: classname/return_type operator operatorsymbol (classname const &obj)
//example of > overloading.
#include<iostream>
using namespace std;
class overload{
    public:
    int num;
    public:
    int get_num(){
    cout<<"Enter number:";
    cin>>num;
    }
    int operator >(overload gt){
        if(num>gt.num){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator == (overload dq){
        if(num==dq.num){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    overload ov1,ov2;
    ov1.get_num();
    ov2.get_num();
    int res=(ov1 > ov2)&&(ov1 == ov2);
    cout<<"Result ="<<res<<endl;
}