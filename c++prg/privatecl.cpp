#include<iostream>
using namespace std;
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
int main(){
    Person p1,p2;  //objects
    p1.get_data(1,"Anjana");  //object.member function name
    p1.display();
    p2.get_data(2,"krishna");
    p2.display();
}