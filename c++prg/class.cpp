#include<iostream>
using namespace std;
class  Person{
    public:
    int pid;
    string name;  //data member
    public:
        int get_data(){  //member function
            cout<<"Enter pid:";
            cin>>pid;
            cout<<"Enter name:";
            cin>>name;
        }
        int display(){   //member function
            cout<<"Pid="<<pid<<endl<<"Name="<<name<<endl;
        }
};
int main(){
    Person p1,p2;  //objects
    p1.get_data();  //object.member function name
    p1.display();
    p2.get_data();
    p2.display();
}