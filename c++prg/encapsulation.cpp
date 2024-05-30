//encapsulation
#include<iostream>
using namespace std;
class Person{
    private:
    int rollno;
    string name;
    public:
    int setdata(int rno,string nm){
        rollno=rno;
        name=nm;
    }
    int getdata(){
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
    }
    int show(){
        cout<<"Name="<<name<<endl<<"Rollno:"<<rollno<<endl;
    }
};
int main(){
    Person p1;
    p1.getdata();
    p1.show();
}