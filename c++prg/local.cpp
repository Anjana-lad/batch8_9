//local class
#include<iostream>
using namespace std;
int main(){
    class  Person{
    private:
    int pid;
    string name;  //data member
    public:
        int get_data(int id,string nm){  //member function
          pid=id;
          name=nm;
        }
        int display(){   //member function
            cout<<"Pid="<<pid<<endl<<"Name="<<name<<endl;
        }
};
Person p1;
p1.get_data(1,"John");
p1.display();
}