//constructor overloading
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,width;
    public:
    Rectangle();
    Rectangle(int len,int wid);
    int area(){
        return length*width;
    }
};
Rectangle::Rectangle(){
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:";
    cin>>width;
}
Rectangle::Rectangle(int len,int wid){
    length=len;
    width=wid;
}
int main(){
    Rectangle rect;
    Rectangle rect2(10,20);
    cout<<"Default constructor:"<<rect.area()<<endl;
    cout<<"parameterized constructor:"<<rect2.area()<<endl;
}