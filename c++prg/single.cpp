//single inheritance
//class child_classname :access_specifier base classname
#include<iostream>
using namespace std;
class Person{
private:
    int id;
    string name;
    public:
    int set_data(){
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    int show(){
        cout<<"Id="<<id<<endl<<"name="<<name<<endl;
    }
};
class student:private Person{
    public:
    int course_id;
    float fees;
    public:
    int set_dt(){
        set_data();
        cout<<"Enter c_id:";
        cin>>course_id;
        cout<<"Enter fees:";
        cin>>fees;
    }
    int display(){
        show();
        cout<<"Course_id="<<course_id<<"\n Fees="<<fees<<endl;
    }
};
int main(){
    student s1;
    s1.set_dt();
    s1.display();
}