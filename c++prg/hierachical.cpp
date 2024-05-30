//hierarchical inheritance: in  this we have one parent class and more then one child class.
#include<iostream>
using namespace std;
class Shape{
    public:
    string name;
    public:
    int getname(){
        cout<<"Enter name :";
        cin>>name;
    }
    int name_s(){
        cout<<"Name:"<<name<<endl;
    }
};
class rectangle :public Shape{
    public:
    int length,width,area;
    public:
    int get_data(){
        getname();
        cout<<"Enter length and width:";
        cin>>length>>width;
    }
    int Area(){
        name_s();
        area=length * width;
        cout<<"Area of rectangle="<<area<<endl;
    }
};
class square:public Shape{
    public:
    int side,ar;
    public:
    int get_side(){
        getname();
        cout<<"Enter side:";
        cin>>side;
    }
    int area_sq(){
        name_s();
        ar=side*side;
        cout<<"Area of square:"<< ar<<endl; 
    }
};
int main(){
    rectangle rect;
    square sq;
    rect.get_data();
    rect.Area();
    sq.get_side();
    sq.area_sq();
}